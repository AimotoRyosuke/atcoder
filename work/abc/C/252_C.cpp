#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    vector<vector<int>> M(10, vector<int>(10));
    rep(i, 10) rep(j, N) { M[i][S.at(j).at(i) - '0']++; }
    int ans = 100000;
    rep(i, 10) {
        int mx = 0;
        rep(j, 10) {
            int cnt = M[j][i];
            mx = max(mx, j + (M[j][i] - 1) * 10);
        }
        ans = min(ans, mx);
    }
    cout << ans << '\n';
}
