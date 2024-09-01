#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    int INF = 1e9;
    vector<vector<int>> dp(N + 1, vector<int>(3, -INF));
    rep(i, 3) dp[0][i] = 0;
    rep(i, N) {
        int ni = i + 1;
        int x = 0;
        if (s.at(i) == 'R')
            x = 0;
        if (s.at(i) == 'P')
            x = 1;
        if (s.at(i) == 'S')
            x = 2;
        rep(j, 3) {
            int val = 0;
            if (j == (x + 1) % 3)
                val = 1;
            if (j == (x + 2) % 3)
                continue;
            rep(pj, 3) {
                if (j == pj)
                    continue;
                dp[ni][j] = max(dp[ni][j], dp[i][pj] + val);
            }
        }
    }
    int ans = max({dp[N][0], dp[N][1], dp[N][2]});
    cout << ans << '\n';
}

// int main() {
//     int N;
//     cin >> N;
//     string s;
//     cin >> s;
//     int INF = 1e9;
//     vector<vector<int>> dp(N + 1, vector<int>(3, -INF));
//     rep(i, 3) dp[0][i] = 0;
//     rep(i, N) {
//         int ni = i + 1;
//         int x = 0;
//         if (s[i] == 'R')
//             x = 0;
//         if (s[i] == 'P')
//             x = 1;
//         if (s[i] == 'S')
//             x = 2;
//         rep(j, 3) {
//             int val = 0;
//             if (j == (x + 1) % 3)
//                 val = 1;
//             if (j == (x + 2) % 3)
//                 continue;
//             rep(pj, 3) {
//                 if (j == pj)
//                     continue;
//                 dp[ni][j] = max(dp[ni][j], dp[i][pj] + val);
//             }
//         }
//     }
//     int ans = max({dp[N][0], dp[N][1], dp[N][2]});
//     cout << ans << '\n';
// }

// int main() {
//     int N;
//     cin >> N;
//     string s;
//     cin >> s;
//     int INF = 1e9;
//     vector<vector<int>> dp(N + 1, vector<int>(3, -INF));
//     rep(i, 3) dp[0][i] = 0;
//     rep(i, N) {
//         int ni = i + 1;
//         int x = 0;
//         if (s[i] == 'R')
//             x = 0;
//         if (s[i] == 'P')
//             x = 1;
//         if (s[i] == 'S')
//             x = 2;
//         rep(j, 3) {
//             int val = 0;
//             if (j == (x + 1) % 3)
//                 val = 1;
//             if (j == (x + 2) % 3)
//                 continue;
//             rep(pj, 3) {
//                 if (j == pj)
//                     continue;
//                 dp[ni][j] = max(dp[ni][j], dp[i][pj] + val);
//             }
//         }
//     }
//     int ans = max({dp[N][0], dp[N][1], dp[N][2]});
//     cout << ans << '\n';
// }
