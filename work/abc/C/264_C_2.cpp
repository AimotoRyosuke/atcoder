#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Sh {
    int h, w;
    vector<vector<int>> C;
    void input() {
        cin >> h >> w;
        C = vector<vector<int>>(h, vector<int>(w));
        rep(i, h) rep(j, w) cin >> C.at(i).at(j);
    }
};

int main() {
    Sh A, B;
    A.input(), B.input();
    bool ok = false;
    rep(hs, 1 << A.h) rep(ws, 1 << A.w) {
        int h = __builtin_popcount(hs);
        int w = __builtin_popcount(ws);
        if (h != B.h || w != B.w)
            continue;
        vector<vector<int>> T(h, vector<int>(w));
        int dh = 0;
        rep(i, A.h) {
            if ((hs >> i & 1) == 0) {
                dh++;
            }
            int dw = 0;
            rep(j, A.w) {
                if ((ws >> j & 1) == 0)
                    dw++;
                if (hs >> i & 1 && ws >> j & 1) {
                    T.at(i - dh).at(j - dw) = A.C.at(i).at(j);
                }
            }
        }
        if (B.C == T) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
