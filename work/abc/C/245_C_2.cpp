#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> B(N);
    for (auto &b : B)
        cin >> b;
    vector<vector<bool>> dp(N, vector<bool>(2));
    dp[0][0] = true, dp[0][1] = true;
    rep(i, N - 1) {
        int ni = i + 1;
        if (dp[i][0]) {
            dp[ni][0] = dp[ni][0] || abs(A.at(ni) - A.at(i)) <= K;
            dp[ni][1] = dp[ni][1] || abs(B.at(ni) - A.at(i)) <= K;
        }
        if (dp[i][1]) {
            dp[ni][0] = dp[ni][0] || abs(A.at(ni) - B.at(i)) <= K;
            dp[ni][1] = dp[ni][1] || abs(B.at(ni) - B.at(i)) <= K;
        }
    }
    bool ok = dp[N - 1][0] || dp[N - 1][1];
    cout << (ok ? "Yes" : "No") << '\n';
}
