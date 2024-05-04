// グリッド斜め確認
// 左上を起点とする右上方向
// for (int i = 0; i < h; i++) {
//     for (int j = 0; j <= i; j++) {
//         if (j + 1 > w)
//             break;
//         int x = j;
//         int y = i - j;
//         cout << "(" << y << ", " << x << ")" << endl;
//     }
// }
// for (int i = 1; i < w; i++) {
//     for (int j = 0; j < w - i; j++) {
//         if (h - 1 - j < 0)
//             break;
//         int x = i + j;
//         int y = h - 1 - j;
//         cout << "(" << y << ", " << x << ")" << endl;
//     }
// }

// // 右上を起点とする右下方向
// for (int i = 0; i < w; i++) {
//     string forward = "";
//     string reverse = "";
//     for (int j = 0; j <= i; j++) {
//         if (j + 1 > h)
//             break;
//         int x = w - 1 - i + j;
//         int y = j;
//         cout << "(" << j << ", " << w - 1 - i + j << ")" << endl;
//     }
// }
// for (int i = 1; i < h; i++) {
//     for (int j = 0; j < h - i; j++) {
//         if (i + 1 + j > w)
//             break;
//         int x = j;
//         int y = i + j;
//         cout << "(" << i + j << ", " << j << ")" << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

const string target = "snuke";
const string r_target = "ekuns";

void check(char c, string &current, string target) {
    if (c == target.at(0)) {
        current = c;
        return;
    } else if (c == target.at(1) && current.size() == 1) {
        current += c;
        return;
    } else if (c == target.at(2) && current.size() == 2) {
        current += c;
        return;
    } else if (c == target.at(3) && current.size() == 3) {
        current += c;
        return;
    } else if (c == target.at(4) && current.size() == 4) {
        current += c;
        return;
    }
    current = "";
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    for (int i = 0; i < h; i++) {
        cin >> grid.at(i);
    }
    // 横方向の確認
    for (int i = 0; i < h; i++) {
        string forward = "";
        string reverse = "";
        for (int j = 0; j < w; j++) {
            check(grid.at(i).at(j), forward, target);
            if (forward == target) {
                for (int k = 0; k < 5; k++) {
                    cout << i + 1 << " " << j + 1 - 4 + k << endl;
                }
                return 0;
            }
            check(grid.at(i).at(j), reverse, r_target);
            if (reverse == target) {
                for (int k = 0; k < 5; k++) {
                    cout << i + 1 << " " << j + 1 - k << endl;
                }
                return 0;
            }
        }
    }

    // 縦方向の確認
    for (int i = 0; i < w; i++) {
        string forward = "";
        string reverse = "";
        for (int j = 0; j < h; j++) {
            check(grid.at(j).at(i), forward, target);
            if (forward == target) {
                for (int k = 0; k < 5; k++) {
                    cout << j + 1 - 4 + k << " " << i + 1 << endl;
                }
                return 0;
            }
            check(grid.at(j).at(i), reverse, r_target);
            if (reverse == r_target) {
                for (int k = 0; k < 5; k++) {
                    cout << j + 1 - k << " " << i + 1 << endl;
                }
                return 0;
            }
        }
    }

    // 右上方向の斜め確認
    for (int i = 0; i < h; i++) {
        string forward = "";
        string reverse = "";
        for (int j = 0; j <= i; j++) {
            if (j + 1 > w)
                break;
            int x = j;
            int y = i - j;
            check(grid.at(y).at(x), forward, target);
            if (forward == target) {
                for (int k = 0; k < 5; k++) {
                    cout << y - 4 + k << " " << x - y + k << endl;
                }
                return 0;
            }
            check(grid.at(y).at(x), reverse, r_target);
            if (reverse == r_target) {
                for (int k = 0; k < 5; k++) {
                    cout << y - k << " " << x - k << endl;
                }
                return 0;
            }
        }
    }
    for (int i = 1; i < w; i++) {
        string forward = "";
        string reverse = "";
        for (int j = 0; j < w - i; j++) {
            if (h - 1 - j < 0)
                break;
            int x = i + j;
            int y = h - 1 - j;
            check(grid.at(y).at(x), forward, target);
            if (forward == target) {
                for (int k = 0; k < 5; k++) {
                    cout << y + 4 - k + 1 << " " << x - 4 + k + 1 << endl;
                }
                return 0;
            }
            check(grid.at(y).at(x), reverse, r_target);
            if (reverse == r_target) {
                for (int k = 0; k < 5; k++) {
                    cout << y + k + 1 << " " << x - k + 1 << endl;
                }
                return 0;
            }
        }
    }

    // 右下方向の斜め確認
    for (int i = 0; i < w; i++) {
        string forward = "";
        string reverse = "";
        for (int j = 0; j <= i; j++) {
            if (j + 1 > h)
                break;
            int x = w - 1 - i + j;
            int y = j;
            check(grid.at(y).at(x), forward, target);
            if (forward == target) {
                for (int k = 0; k < 5; k++) {
                    cout << y - 4 + k + 1 << " " << x - 4 + k + 1 << endl;
                }
                return 0;
            }
            check(grid.at(y).at(x), reverse, r_target);
            if (reverse == r_target) {
                for (int k = 0; k < 5; k++) {
                    cout << y - k + 1 << " " << x - k + 1 << endl;
                }
                return 0;
            }
        }
    }
    for (int i = 1; i < h; i++) {
        string forward = "";
        string reverse = "";
        for (int j = 0; j < h - i; j++) {
            if (i + 1 + j > w) {
                break;
            }
            int x = j;
            int y = i + j;
            check(grid.at(y).at(x), forward, target);
            if (forward == target) {
                for (int k = 0; k < 5; k++) {
                    cout << y - 4 + k + 1 << " " << x - 4 + k + 1 << endl;
                }
                return 0;
            }
            check(grid.at(y).at(x), reverse, r_target);
            if (reverse == r_target) {
                for (int k = 0; k < 5; k++) {
                    cout << y - k + 1 << " " << x - k + 1 << endl;
                }
                return 0;
            }
        }
    }
}
