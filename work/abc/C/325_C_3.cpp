#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (auto &s : S)
        cin >> s;

    vector<vector<bool>> used(H, vector<bool>(W));
    auto f = [&](auto f, int y, int x) -> void {
        used.at(y).at(x) = true;
        if (S.at(y).at(x) == '.')
            return;
        rep(i, 8) {
            int ny = dy[i] + y, nx = dx[i] + x;
            if (ny < 0 || ny >= H || nx < 0 || nx >= W || used.at(ny).at(nx))
                continue;
            f(f, ny, nx);
        }
    };
    int cnt = 0;
    rep(i, H) rep(j, W) {
        if (used.at(i).at(j))
            continue;
        if (S.at(i).at(j) == '.') {
            used.at(i).at(j) = true;
            continue;
        }
        cnt++;
        f(f, i, j);
    }
    cout << cnt << '\n';
}
