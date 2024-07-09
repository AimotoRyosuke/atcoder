// 復習する
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> G(H);
    for (auto &g : G)
        cin >> g;

    vector<vector<bool>> visited(H, vector<bool>(W, false));
    int ans = 0;
    auto visit = [&](auto visit, int y, int x) -> void {
        visited[y][x] = true;
        if (G[y][x] == '.')
            return;
        rep(i, 8) {
            int ny = y + dy[i], nx = x + dx[i];
            if (ny < 0 || ny >= H || nx < 0 || nx >= W || visited[ny][nx])
                continue;
            visit(visit, ny, nx);
        }
    };
    rep(i, H) rep(j, W) {
        if (visited[i][j]) {
            continue;
        }
        visit(visit, i, j);
        if (G[i][j] == '#')
            ans++;
    }
    cout << ans << '\n';
}
