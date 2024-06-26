#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (auto &c : C)
        cin >> c;
    vector<pair<int, int>> ctrs;
    rep(i, H) {
        if (i == 0 || i == H - 1)
            continue;
        rep(j, W) {
            if (j == 0 || j == W - 1)
                continue;
            if (C.at(i).at(j) == '#' && C.at(i - 1).at(j - 1) == '#' &&
                C.at(i + 1).at(j + 1) == '#' && C.at(i + 1).at(j - 1) == '#' &&
                C.at(i - 1).at(j + 1) == '#') {
                ctrs.emplace_back(i, j);
            }
        }
    }
    map<int, int> size_cnt;
    rep(i, ctrs.size()) {
        int s = ctrs.at(i).first + 1, t = ctrs.at(i).second + 1;
        int size = 0;
        while (!(s == -1 || t == -1 || s == H || t == W) &&
               C.at(s).at(t) == '#') {
            size++, s++, t++;
        }
        size_cnt[size]++;
    }
    int N = min(H, W);
    rep(i, N) cout << size_cnt[i + 1] << " ";
}
