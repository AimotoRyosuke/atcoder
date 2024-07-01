#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    string T;
    cin >> T;
    vector<string> S(H);
    for (auto &s : S)
        cin >> s;

    auto move = [&](int i, int j) -> bool {
        if (S.at(i).at(j) == '#')
            return false;
        for (int k = 0; k < T.size(); k++) {
            char t = T.at(k);
            if (t == 'L')
                j--;
            if (t == 'R')
                j++;
            if (t == 'U')
                i--;
            if (t == 'D')
                i++;
            if (S.at(i).at(j) == '#')
                return false;
        }
        return true;
    };

    int cnt = 0;
    rep(si, H) rep(sj, W) {
        int i = si, j = sj;
        bool ok = move(i, j);
        if (ok)
            cnt++;
    }
    cout << cnt << endl;
}
