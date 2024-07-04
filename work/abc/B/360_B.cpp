#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S, T;
    cin >> S >> T;
    bool ans = false;
    rep(w, S.size()) {
        if (w == 0)
            continue;
        rep(c, w) {
            int len = S.size() % w == 0 ? S.size() / w : S.size() / w + 1;
            string tgt = "";
            rep(i, len) {
                int idx = i * w + c;
                if (idx >= S.size()) {
                    continue;
                }
                tgt += S.at(idx);
            }
            if (tgt == T) {
                ans = true;
                break;
            }
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
}
