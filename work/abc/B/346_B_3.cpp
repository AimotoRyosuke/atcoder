#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

string base = "wbwbwwbwbwbw";

int main() {
    int W, B;
    cin >> W >> B;
    bool ok = false;
    rep(i, base.size()) {
        int w = 0, b = 0;
        rep(j, W + B) {
            char c = base.at((i + j) % base.size());
            if (c == 'w')
                w++;
            else
                b++;
        }
        if (w == W && b == B) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}
