#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, X;
    cin >> N >> X;
    vector<pair<int, int>> P(N);
    rep(i, N) cin >> P[i].first >> P[i].second;

    vector<vector<bool>> dp(N + 1, vector<bool>(X + 1, false));
    dp[0][0] = true;
    rep(i, N) {
        int ni = i + 1;
        rep(j, X + 1) if (dp[i][j]) {
            int nj1 = j + P[i].first;
            if (nj1 <= X)
                dp[ni][j + P[i].first] = true;
            int nj2 = j + P[i].second;
            if (nj2 <= X)
                dp[ni][j + P[i].second] = true;
        }
    }
    bool ok = dp[N][X];
    cout << (ok ? "Yes" : "No") << '\n';
}
