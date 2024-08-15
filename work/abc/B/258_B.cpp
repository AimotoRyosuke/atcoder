#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<string> T(N);
    rep(i, N) cin >> T.at(i);
    vector<vector<int>> A(N, vector<int>(N));
    rep(i, N) rep(j, N) { A.at(i).at(j) = T.at(i).at(j) - '0'; }
    ll ans = 0;
    rep(i, N) rep(j, N) {
        rep(s, 8) {
            vector<int> v = {A.at(i).at(j)};
            rep(t, N - 1) {
                int ni = (i + dy[s] * (t + 1) + N) % N;
                int nj = (j + dx[s] * (t + 1) + N) % N;
                v.push_back(A.at(ni).at(nj));
            }
            ll res = 0;
            rep(s, N) { res += pow(10, N - 1 - s) * v.at(s); }
            ans = max(ans, res);
        }
    }
    cout << ans << '\n';
}
