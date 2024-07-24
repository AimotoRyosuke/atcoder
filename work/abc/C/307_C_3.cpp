#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Sheet {
    int h, w;
    vector<string> s;

    void input() {
        cin >> h >> w;
        s = vector<string>(h);
        rep(i, h) cin >> s[i];
    }
    void clear() { rep(i, h) rep(j, w) s[i][j] = '.'; }
    bool copy(Sheet sh, int di, int dj) {
        rep(i, sh.h) rep(j, sh.w) {
            if (sh.s[i][j] == '.')
                continue;
            int ni = i + di, nj = j + dj;
            if (ni < 0 || ni >= h || nj < 0 || nj >= w)
                return false;
            s[ni][nj] = sh.s[i][j];
        }
        return true;
    }
};

int main() {
    Sheet a, b, x;
    a.input();
    b.input();
    x.input();
    for (int ai = -a.h + 1; ai < x.h; ai++) {
        for (int aj = -a.w + 1; aj < x.w; aj++) {
            for (int bi = -b.h + 1; bi < x.h; bi++) {
                for (int bj = -b.w + 1; bj < x.w; bj++) {
                    Sheet y = x;
                    y.clear();
                    if (!y.copy(a, ai, aj))
                        continue;
                    if (!y.copy(b, bi, bj))
                        continue;
                    if (x.s != y.s)
                        continue;
                    cout << "Yes" << '\n';
                    return 0;
                }
            }
        }
    }
    cout << "No" << '\n';
}
