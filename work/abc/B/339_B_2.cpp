#include <bits/stdc++.h>
using namespace std;

const char wh = '.';
const char bk = '#';

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<vector<bool>> grid(H, vector<bool>(W, 0));
    int pos_y = 0;
    int pos_x = 0;
    int d = 0; // 0:上,1:右,2:下,3:左
    for (int i = 0; i < N; i++) {
        bool cur = grid.at(pos_y).at(pos_x);
        grid.at(pos_y).at(pos_x) = !cur;
        if (cur)
            d = (d - 1 + 4) % 4;
        else
            d = (d + 1) % 4;
        if (d == 0)
            pos_y = (pos_y - 1 + H) % H;
        else if (d == 1)
            pos_x = (pos_x + 1) % W;
        else if (d == 2)
            pos_y = (pos_y + 1) % H;
        else if (d == 3)
            pos_x = (pos_x - 1 + W) % W;
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << (grid.at(i).at(j) ? bk : wh);
        }
        cout << endl;
    }
}
