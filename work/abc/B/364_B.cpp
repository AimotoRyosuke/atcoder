#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    int pi, pj;
    cin >> pi >> pj;
    pi--, pj--;
    vector<vector<char>> C(H, vector<char>(W));
    for (auto &rows : C)
        for (auto &c : rows)
            cin >> c;
    string x;
    cin >> x;
    rep(i, (int)x.size()) {
        char c = x.at(i);
        int ni = pi, nj = pj;
        if (c == 'L')
            nj--;
        else if (c == 'R')
            nj++;
        else if (c == 'U')
            ni--;
        else if (c == 'D')
            ni++;
        if (ni < 0 || ni >= H || nj < 0 || nj >= W || C[ni][nj] != '.')
            continue;
        pi = ni, pj = nj;
    }
    cout << pi + 1 << " " << pj + 1 << '\n';
}
