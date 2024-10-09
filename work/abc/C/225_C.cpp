#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> B(H, vector<int>(W));
    rep(i, H) rep(j, W) {
        cin >> B.at(i).at(j);
        B.at(i).at(j)--;
    }
    bool ok = true;
    int si = B[0][0] / 7;
    int sj = B[0][0] % 7;
    if (sj + W - 1 >= 7)
        ok = false;
    rep(i, H) {
        if (!ok)
            break;
        rep(j, W) {
            int nb = (si + i) * 7 + (sj + j);
            if (B.at(i).at(j) != nb)
                ok = false;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
