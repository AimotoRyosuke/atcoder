#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

const int mod = 998244353;

int main() {
    int N;
    cin >> N;
    vector<vector<ll>> dp(N, vector<ll>(9));
    rep(i, 9) { dp[0][i] = 1; }
    rep(i, N - 1) {
        rep(j, 9) {
            ll x = dp[i][j];
            if (j != 8)
                x += dp[i][j + 1];
            if (j != 0)
                x += dp[i][j - 1];
            x %= mod;
            dp[i + 1][j] = x;
        }
    }
    ll ans = 0;
    rep(i, 9) { ans += dp[N - 1][i]; }
    ans %= mod;
    cout << ans << '\n';
}
