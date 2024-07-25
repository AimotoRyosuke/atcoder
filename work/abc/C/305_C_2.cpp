#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (auto &c : C)
        cin >> c;

    auto isAns = [&](int y, int x) -> bool {
        int cnt = 0;
        rep(i, 4) {
            int ny = y + dy[i], nx = x + dx[i];
            if (ny < 0 || ny >= H || nx < 0 || nx >= W)
                continue;
            if (C.at(ny).at(nx) == '#')
                cnt++;
        }
        return cnt >= 2;
    };

    rep(i, H) rep(j, W) {
        if (C.at(i).at(j) == '#')
            continue;
        if (isAns(i, j)) {
            printf("%d %d\n", i + 1, j + 1);
            return 0;
        }
    }
}
