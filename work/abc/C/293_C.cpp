#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    rep(i, H) rep(j, W) cin >> A.at(i).at(j);
    int cnt = 0;
    auto f = [&](auto f, int i, int j, unordered_map<int, bool> used) -> void {
        if (used[A.at(i).at(j)])
            return;
        if (i == H - 1 && j == W - 1) {
            cnt++;
            return;
        }
        used[A.at(i).at(j)] = true;
        if (i != H - 1) {
            f(f, i + 1, j, used);
        }
        if (j != W - 1) {
            f(f, i, j + 1, used);
        }
        return;
    };
    f(f, 0, 0, unordered_map<int, bool>());
    cout << cnt << '\n';
}
