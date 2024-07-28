#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int dx[] = {1, 1, -1, -1};
int dy[] = {1, -1, 1, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> C(H, vector<char>(W));
    for (auto &rows : C)
        for (auto &c : rows)
            cin >> c;

    auto is_center = [&](int pi, int pj) -> bool {
        if (C.at(pi).at(pj) == '.')
            return false;
        bool ok = true;
        rep(i, 4) {
            int y = pi + dy[i], x = pj + dx[i];
            if (y < 0 || y >= H || x < 0 || x >= W || C.at(y).at(x) == '.')
                ok = false;
        }
        return ok;
    };

    int N = min(H, W);
    vector<int> ans(N);
    rep(i, H) rep(j, W) {
        if (!is_center(i, j))
            continue;
        int x = j + 1, y = i + 1;
        int cnt = 0;
        while (y >= 0 && y < H && x >= 0 && x < W && C.at(y).at(x) == '#') {
            cnt++;
            y++, x++;
        }
        ans[cnt - 1]++;
    }
    rep(i, N) cout << ans.at(i) << ' ';
}
