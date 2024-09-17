#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    bool ok = false;
    rep(i, N) {
        rep(j, N) {
            rep(d, 8) {
                int check_cnt = 0, ok_cnt = 0;
                rep(s, 6) {
                    int di = dy[d] * s + i;
                    int dj = dx[d] * s + j;
                    if (di < 0 || di >= N || dj < 0 || dj >= N)
                        break;
                    check_cnt++;
                    ok_cnt += S.at(di).at(dj) == '#';
                }
                if (check_cnt == 6 && ok_cnt >= 4) {
                    ok = true;
                }
            }
            if (ok)
                break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
