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
    int INF = 1e9;
    vector<vector<ll>> dp(N + 1, vector<ll>(2, -INF));
    dp[0][0] = 0;
    rep(i, N) {
        int ni = i + 1;
        rep(j, 2) {
            {
                int nj = j ^ 1;
                ll x = nj % 2 ? A[i] : A[i] * 2;
                dp[ni][nj] = max(dp[ni][nj], dp[i][j] + x);
            }
            { dp[ni][j] = max(dp[ni][j], dp[i][j]); }
        }
    }
    cout << max(dp[N][0], dp[N][1]) << '\n';
}
