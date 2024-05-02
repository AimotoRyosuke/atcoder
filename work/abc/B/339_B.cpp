#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    int direction = 0; // 0:上, 1:右, 2:下, 3:左
    vector<vector<bool>> grid(h, vector<bool>(w, false));
    vector<int> position(2, 0);
    for (int i = 0; i < n; i++) {
        grid.at(position.at(1)).at(position.at(0)) =
            !grid.at(position.at(1)).at(position.at(0));
        if (grid.at(position.at(1)).at(position.at(0))) {
            direction += 1;
        } else {
            direction -= 1;
        }
        if (direction % 4 == 0) {
            position.at(1) -= 1;
            if (position.at(1) == -1)
                position.at(1) = h - 1;
        } else if (direction % 4 == 1) {
            position.at(0) += 1;
            if (position.at(0) == w)
                position.at(0) = 0;
        } else if (direction % 4 == 2) {
            position.at(1) += 1;
            if (position.at(1) == h)
                position.at(1) = 0;
        } else if (direction % 4 == 3) {
            position.at(0) -= 1;
            if (position.at(0) == -1)
                position.at(0) = w - 1;
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid.at(i).at(j))
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
    }
}
