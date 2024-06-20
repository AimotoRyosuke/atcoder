#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for (auto &row : grid)
        cin >> row;
    int h, w = -1;
    int h_min = 500, w_min = 500;
    for (int i = 0; i < H; i++) {
        int cnt = 0;
        for (int j = 0; j < W; j++) {
            if (grid.at(i).at(j) == '#')
                cnt++;
        }
        if (cnt == 0)
            continue;
        if (h_min > cnt) {
            h_min = cnt;
            h = i;
        }
    }
    for (int i = 0; i < W; i++) {
        int cnt = 0;
        for (int j = 0; j < H; j++) {
            if (grid.at(j).at(i) == '#')
                cnt++;
        }
        if (cnt == 0)
            continue;
        if (w_min > cnt) {
            w_min = cnt;
            w = i;
        }
    }
    cout << h + 1 << " " << w + 1 << endl;
}
