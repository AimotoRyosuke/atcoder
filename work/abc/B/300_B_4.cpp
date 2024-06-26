#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H);
    for (auto &a : A)
        cin >> a;
    vector<string> B(H);
    for (auto &b : B)
        cin >> b;
    bool ans = false;
    rep(s, H) rep(t, W) {
        // s,tはBを動かす値
        bool ok = true;
        rep(y, H) rep(x, W) {
            char a = A.at(y).at(x), b = B.at((y + s) % H).at((x + t) % W);
            if (a != b) {
                ok = false;
                break;
            }
        }
        if (ok) {
            ans = true;
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
}
