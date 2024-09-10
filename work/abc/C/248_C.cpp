#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
const int MOD = 998244353;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<vector<int>> dp(N + 1, vector<int>(K + 1));
    dp[0][0] = 1;
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= K; y++) {
            int now = 0;
            for (int i = 1; i <= M; i++) {
                if (y - i < 0)
                    break;
                now += dp[x - 1][y - i];
                now %= MOD;
            }
            dp[x][y] = now;
        }
    }
    int ans = 0;
    rep(i, K) {
        ans += dp[N][i + 1];
        ans %= MOD;
    }
    cout << ans << '\n';
}

// int main() {
//     int N, M, K;
//     cin >> N >> M >> K;
//     vector<vector<int>> dp(N + 1, vector<int>(K + 1));
//     dp[0][0] = 1;
//     for (int x = 1; x < N + 1; x++) {
//         rep(y, K + 1) {
//             int now = 0;
//             for (int i = 1; i <= M; i++) {
//                 if (y - i < 0)
//                     break;
//                 now += dp[x - 1][y - i];
//                 now %= MOD;
//             }
//             dp[x][y] = now;
//         }
//     }
//     int ans = 0;
//     for (int i = 1; i < K + 1; i++) {
//         ans += dp[N][i];
//         ans %= MOD;
//     }
//     cout << ans << '\n';
// }
