// 復習する
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    sort(A.begin(), A.end());
    int r = 0;
    int ans = 0;
    rep(l, N) {
        while (r < N && A.at(r) - A.at(l) < M) {
            r++;
        }
        ans = max(ans, r - l);
    }
    cout << ans << endl;
}
