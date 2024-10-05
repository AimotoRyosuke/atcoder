#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(2, vector<int>(N));
    rep(i, N) { cin >> A.at(0).at(i); }
    rep(i, N) { cin >> A.at(1).at(i); }
    int ans = 0;
    rep(i, N) {
        pair<int, int> cur;
        int cnt = A[0][0];
        vector<vector<bool>> used(2, vector<bool>(N));
        rep(j, N) {
            if (i == j)
                cur.first++;
            else
                cur.second++;
            if (!used[cur.first][cur.second]) {
                cnt += A[cur.first][cur.second];
                used[cur.first][cur.second] = true;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
}
