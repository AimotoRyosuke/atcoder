#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    int d = 0; // 上,右,下,左の順
    pair<int, int> p(0, 0);
    vector<vector<bool>> grid(H, vector<bool>(W, false));
    rep(i, N) {
        d += grid[p.first][p.second] ? 3 : 1;
        grid[p.first][p.second] = !grid[p.first][p.second];
        p.first += dy[d % 4], p.second += dx[d % 4];
        if (p.first < 0)
            p.first += H;
        if (p.first >= H)
            p.first = 0;
        if (p.second < 0)
            p.second += W;
        if (p.second >= W)
            p.second = 0;
    }
    rep(i, H) {
        rep(j, W) { cout << (grid[i][j] ? '#' : '.'); }
        cout << endl;
    }
}
