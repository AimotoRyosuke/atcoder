#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(2));
    for (auto &a : A)
        cin >> a[0] >> a[1];
    sort(A.begin(), A.end(),
         [](const auto &a, const auto &b) { return a[1] > b[1]; });
    int l = 0;
    int ans = 0;
    rep(r, N) {
        auto al = A.at(l), ar = A.at(r);
        if (l == r)
            continue;
        if (al[0] == ar[0]) {
            ans = max(ans, al[1] + ar[1] / 2);
        } else {
            ans = max(ans, al[1] + ar[1]);
            l = r;
        }
    }
    cout << ans << '\n';
}
