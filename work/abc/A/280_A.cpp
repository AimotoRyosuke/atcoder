#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (auto &c : C)
        cin >> c;
    int cnt = 0;
    rep(i, H) rep(j, W) if (C.at(i).at(j) == '#') cnt++;
    cout << cnt << '\n';
}
