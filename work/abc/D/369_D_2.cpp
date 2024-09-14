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
    const ll INF = 1e18;
    vector<vector<ll>> dp(N + 1, vector<ll>(2, -INF));
    dp[0][0] = 0;
    rep(i, N) {
        int ni = i + 1;
        rep(j, 2) {
            {
                int nj = j ^ 1;
                int x = nj % 2 ? A.at(i) : A.at(i) * 2;
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
