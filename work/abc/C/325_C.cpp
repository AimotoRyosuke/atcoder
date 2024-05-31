#include <bits/stdc++.h>
using namespace std;
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (auto &h : grid)
        cin >> h;

    int ans = 0;
    vector<vector<bool>> used(H, vector<bool>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid.at(i).at(j) == '.' || used.at(i).at(j))
                continue;
            queue<pair<int, int>> que;
            que.push({i, j});
            while (!que.empty()) {
                pair<int, int> p = que.front();
                int y = p.first, x = p.second;
                que.pop();
                for (int d = 0; d < 8; d++) {
                    int ny = y + dy[d];
                    int nx = x + dx[d];
                    if (ny >= 0 && ny < H && nx >= 0 && nx < W &&
                        !used.at(ny).at(nx) && grid.at(ny).at(nx) == '#') {
                        used.at(ny).at(nx) = true;
                        que.push({ny, nx});
                    }
                }
            }
            ans++;
        }
    }

    cout << ans << endl;
}
