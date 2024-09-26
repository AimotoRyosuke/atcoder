#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    sort(A.rbegin(), A.rend());
    vector<int> ans(N);
    int cur = 0, next = 1, k = 0;
    rep(i, N) {
        cur++;
        if (i == N - 1 || A.at(i + 1) != A.at(i)) {
            ans[k] = cur;
            k++;
            cur = 0;
        }
    }
    rep(i, N) cout << ans[i] << '\n';
}
