#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

string tgt = "snuke";

void add(string &s, char c) {
    s += c;
    if (s.size() > 5)
        s = s.substr(s.size() - 5, s.size());
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (auto &s : grid)
        cin >> s;

    rep(i, H) rep(j, W) {
        // 右方向
        rep(k, 5) {
            if (j + k >= W || grid[i][j + k] != tgt[k])
                break;
            if (k == 4) {
                rep(l, 5) cout << i + 1 << " " << j + l + 1 << endl;
                return 0;
            }
        }
        // 左方向
        rep(k, 5) {
            if (j - k < 0 || grid[i][j - k] != tgt[k])
                break;
            if (k == 4) {
                rep(l, 5) cout << i + 1 << " " << j - l + 1 << endl;
                return 0;
            }
        }
        // 上方向
        rep(k, 5) {
            if (i - k < 0 || grid[i - k][j] != tgt[k])
                break;
            if (k == 4) {
                rep(l, 5) cout << i - l + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
        // 下方向
        rep(k, 5) {
            if (i + k >= H || grid[i + k][j] != tgt[k])
                break;
            if (k == 4) {
                rep(l, 5) cout << i + l + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
        // 右上方向
        rep(k, 5) {
            if (i - k < 0 || j + k >= W || grid[i - k][j + k] != tgt[k])
                break;
            if (k == 4) {
                rep(l, 5) cout << i - l + 1 << " " << j + l + 1 << endl;
                return 0;
            }
        }
        // 右下方向
        rep(k, 5) {
            if (i + k >= H || j + k >= W || grid[i + k][j + k] != tgt[k])
                break;
            if (k == 4) {
                rep(l, 5) cout << i + l + 1 << " " << j + l + 1 << endl;
                return 0;
            }
        }
        // 左下方向
        rep(k, 5) {
            if (i + k >= H || j - k < 0 || grid[i + k][j - k] != tgt[k])
                break;
            if (k == 4) {
                rep(l, 5) cout << i + l + 1 << " " << j - l + 1 << endl;
                return 0;
            }
        }
        // 左上方向
        rep(k, 5) {
            if (i - k < 0 || j - k < 0 || grid[i - k][j - k] != tgt[k])
                break;
            if (k == 4) {
                rep(l, 5) cout << i - l + 1 << " " << j - l + 1 << endl;
                return 0;
            }
        }
    }
}
