#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Sheet {
    int h, w;
    vector<string> S;
    void input() {
        cin >> h >> w;
        S = vector<string>(h);
        rep(i, h) cin >> S.at(i);
    }

    void clear() { rep(i, h) rep(j, w) S.at(i).at(j) = '.'; }

    bool merge(Sheet sh, int di, int dj) {
        rep(i, sh.h) rep(j, sh.w) {
            if (sh.S.at(i).at(j) == '.')
                continue;
            int ni = i + di, nj = j + dj;
            if (ni < 0 || ni >= h || nj < 0 || nj >= w)
                return false;
            S.at(ni).at(nj) = '#';
        }
        return true;
    }
};

int main() {
    Sheet A, B, X;
    A.input(), B.input(), X.input();

    for (int ai = -A.h + 1; ai < X.h; ai++) {
        for (int aj = -A.w + 1; aj < X.w; aj++) {
            for (int bi = -B.h + 1; bi < X.h; bi++) {
                for (int bj = -B.w + 1; bj < X.w; bj++) {
                    auto Y = X;
                    Y.clear();
                    if (!Y.merge(A, ai, aj))
                        continue;
                    if (!Y.merge(B, bi, bj))
                        continue;
                    if (Y.S == X.S) {
                        cout << "Yes" << '\n';
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << '\n';
}
