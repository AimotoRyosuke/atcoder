#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    ll INF = 1e18;
    vector<vector<ll>> dp(N + 1, vector<ll>(2, -INF));
    dp[0][0] = 0;
    rep(i, N) {
        int ni = i + 1;
        rep(j, 2) {
            {
                int nj = j ^ 1;
                int x = j % 2 ? A.at(i) * 2 : A.at(i);
                dp[ni][nj] = max(dp[ni][nj], dp[i][j] + x);
            }
            {
                int nj = j;
                dp[ni][nj] = max(dp[ni][nj], dp[i][j]);
            }
        }
    }
    ll ans = max(dp[N][0], dp[N][1]);
    cout << ans << '\n';
}

// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (auto &a : A)
//         cin >> a;
//     const ll INF = 1e18;
//     vector<vector<ll>> dp(N + 1, vector<ll>(2, -INF));
//     rep(i, N) {
//         int ni = i + 1;
//         rep(j, 2) {
//             {
//                 int nj = j ^ 1;
//                 int X = j % 2 ? A.at(i) * 2 : A.at(i);
//                 dp[ni][nj] = max(dp[ni][nj], dp[ni][nj] + X);
//             }
//             {
//                 int nj = j;
//                 dp[ni][nj] = max(dp[ni][nj], dp[i][j]);
//             }
//         }
//     }
//     ll ans = max(dp[N][0], dp[N][1]);
//     cout << ans << '\n';
// }

// void chmax(ll &x, ll y) { x = max(x, y); }

// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (auto &a : A)
//         cin >> a;
//     const ll INF = 1e18;
//     vector<vector<ll>> dp(N + 1, vector<ll>(2, -INF));
//     dp[0][0] = 0;
//     rep(i, N) {
//         int ni = i + 1;
//         rep(j, 2) {
//             {
//                 int nj = j ^ 1;
//                 int X = (j % 2) ? A[i] * 2 : A[i];
//                 chmax(dp[ni][nj], dp[i][j] + X);
//             }
//             {
//                 int nj = j;
//                 chmax(dp[ni][nj], dp[i][j]);
//             }
//         }
//     }
//     ll ans = max(dp[N][0], dp[N][1]);
//     cout << ans << '\n';
// }
