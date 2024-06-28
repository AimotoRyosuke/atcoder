#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S, T;
    cin >> S >> T;
    int ti = 0;
    bool ok = false;
    rep(i, S.size()) {
        char s = S.at(i);
        if (toupper(s) == toupper(T.at(ti))) {
            ti++;
            if (ti == 3) {
                ok = true;
                break;
            }
        }
        if (ti == 2 && T.at(ti) == 'X') {
            ok = true;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}
