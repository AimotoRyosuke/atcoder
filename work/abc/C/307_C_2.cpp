#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Sheet {
    int H, W;
    vector<string> S;
    void input() {
        cin >> H >> W;
        S = vector<string>(H);
        rep(i, H) { cin >> S.at(i); }
    }
    void clear() { rep(i, H) rep(j, W) S[i][j] = '.'; }
    bool copy(Sheet origin, int di, int dj) {
        rep(i, origin.H) rep(j, origin.W) {
            if (origin.S[i][j] == '.')
                continue;
            int ni = i + di, nj = j + dj;
            if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                return false;
            S[ni][nj] = origin.S[i][j];
        }
        return true;
    }
};

int main() {
    Sheet A, B, X;
    A.input(), B.input(), X.input();

    for (int ai = -A.H + 1; ai < X.H; ai++) {
        for (int aj = -A.W + 1; aj <= X.W; aj++) {
            for (int bi = -B.H + 1; bi < X.H; bi++) {
                for (int bj = -B.W + 1; bj <= X.W; bj++) {
                    Sheet Y = X;
                    Y.clear();
                    if (!Y.copy(A, ai, aj))
                        continue;
                    if (!Y.copy(B, bi, bj))
                        continue;
                    if (X.S == Y.S) {
                        cout << "Yes" << '\n';
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << '\n';
}
