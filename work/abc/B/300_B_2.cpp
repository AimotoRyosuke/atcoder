#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H), B(H);
    for (auto &a : A)
        cin >> a;
    for (auto &b : B)
        cin >> b;
    // s,t分ずらす
    for (int s = 0; s < H; s++)
        for (int t = 0; t < W; t++) {
            bool ok = true;
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    // s,tは+-どちらでも大丈夫
                    if (A.at((i + s + H) % H).at((j + t + W) % W) !=
                        B.at(i).at(j)) {
                        ok = false;
                    }
                }
            }
            if (ok) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    cout << "No" << endl;
}
