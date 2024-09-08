#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Sh {
    int h, w;
    vector<string> A;
    void input() {
        cin >> h >> w;
        A = vector<string>(h);
        rep(i, h) cin >> A.at(i);
    }
    void clear() { rep(i, h) rep(j, w) A.at(i).at(j) = '.'; }
    bool copy(Sh sh, int di, int dj) {
        rep(i, sh.h) rep(j, sh.w) {
            int ni = i + di, nj = j + dj;
            if (sh.A.at(i).at(j) == '.')
                continue;
            if ((ni < 0 || ni >= h || nj < 0 || nj >= w)) {
                return false;
            }
            A.at(ni).at(nj) = sh.A.at(i).at(j);
        }
        return true;
    }
};

int main() {
    Sh a, b, x;
    a.input(), b.input(), x.input();
    for (int ai = -a.h + 1; ai < x.h; ai++) {
        for (int aj = -a.w + 1; aj < x.w; aj++) {
            for (int bi = -b.h + 1; bi < x.h; bi++) {
                for (int bj = -b.w + 1; bj < x.w; bj++) {
                    auto y = x;
                    y.clear();
                    if (!y.copy(a, ai, aj))
                        continue;
                    if (!y.copy(b, bi, bj))
                        continue;
                    if (x.A == y.A) {
                        cout << "Yes" << '\n';
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << '\n';
}
