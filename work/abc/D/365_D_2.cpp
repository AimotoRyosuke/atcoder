#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    vector<vector<int>> dp(N + 1, vector<int>(3));
    rep(i, N) {
        int x = 0;
        if (s.at(i) == 'R')
            x = 0;
        else if (s.at(i) == 'S')
            x = 1;
        else if (s.at(i) == 'P')
            x = 2;
        int ni = i + 1;
        rep(j, 3) {
            // jはこれから出す手
            if ((j - x + 3) % 3 == 1)
                continue;
            int val = (j - x + 3) % 3 == 0 ? 0 : 1;
            rep(pj, 3) {
                // pjは前の手
                if (j == pj)
                    continue;
                dp[ni][j] = max(dp[ni][j], dp[i][pj] + val);
            }
        }
    }
    cout << max({dp[N][0], dp[N][1], dp[N][2]}) << '\n';
}
