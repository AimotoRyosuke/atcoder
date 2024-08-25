#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (auto &c : C)
        cin >> c;
    map<pair<int, int>, bool> used;
    bool never = true;
    int ci = 0, cj = 0;
    while (!used[{ci, cj}]) {
        int bi = ci, bj = cj;
        used[{ci, cj}] = true;
        char c = C.at(ci).at(cj);
        if (c == 'R')
            cj++;
        else if (c == 'L')
            cj--;
        else if (c == 'U')
            ci--;
        else if (c == 'D')
            ci++;
        if (ci < 0 || ci >= H || cj < 0 || cj >= W) {
            never = false;
            ci = bi, cj = bj;
        }
    }
    if (never)
        cout << -1 << '\n';
    else
        cout << ci + 1 << " " << cj + 1 << '\n';
}
