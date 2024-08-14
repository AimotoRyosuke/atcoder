#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (auto &c : C)
        cin >> c;
    rep(i, H) rep(j, W - 1) {
        if (C.at(i).at(j) == 'T' && C.at(i).at(j + 1) == 'T') {
            C.at(i).at(j) = 'P';
            C.at(i).at(j + 1) = 'C';
            j++;
        }
    }
    rep(i, H) { cout << C.at(i) << '\n'; }
}
