#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    set<pair<int, int>> st;
    vector<pair<int, int>> ps;
    rep(i, 9) {
        string s;
        cin >> s;
        rep(j, 9) {
            if (s.at(j) == '#') {
                st.emplace(i, j);
                ps.emplace_back(i, j);
            }
        }
    }
    int N = ps.size();
    int ans = 0;
    rep(ai, N) rep(bi, N) {
        if (ai == bi)
            continue;
        auto a = ps.at(ai), b = ps.at(bi);
        int di = b.first - a.first, dj = b.second - a.second;
        pair<int, int> c(b.first - dj, b.second + di);
        pair<int, int> d(c.first - di, c.second - dj);
        if (st.count(c) && st.count(d))
            ans++;
    }
    ans /= 4;
    cout << ans << '\n';
}

// bool check(vector<int> &x, vector<int> &y) {
//     vector<int> v;
//     for (int i = 0; i < 4; i++)
//         for (int j = i + 1; j < 4; j++) {
//             int dx = x[i] - x[j], dy = y[i] - y[j];
//             v.push_back(dx * dx + dy * dy);
//         }
//     sort(v.begin(), v.end());
//     int l = v[0];
//     if (l == 0)
//         return false; // 点が重なる
//     return v[0] == l && v[1] == l && v[2] == l && v[3] == l && v[4] == l * 2
//     &&
//            v[5] == l * 2;
// }

// int main() {
//     set<pair<int, int>> st;
//     rep(i, 9) {
//         string s;
//         cin >> s;
//         rep(j, 9) {
//             if (s.at(j) == '#')
//                 st.emplace(i, j);
//         }
//     }
//     int cnt = 0;

//     set<vector<pair<int, int>>> used;

//     rep(ai, 9) rep(bi, 9 - ai) rep(ci, 9 - bi) rep(di, 9 - ci) rep(aj, 9)
//         rep(bj, 9 - aj) rep(cj, 9 - bj) rep(dj, 9 - cj) {
//         vector<int> x = {ai, ai + bi, bi + ci, ci + di};
//         vector<int> y = {aj, aj + bj, bj + cj, cj + dj};
//         pair<int, int> a(ai, aj), b(ai + bi, aj + bj), c(bi + ci, bj + cj),
//             d(ci + di, cj + dj);
//         vector<pair<int, int>> p = {a, b, c, d};
//         sort(p.begin(), p.end());
//         if (!used.count(p) && st.count(a) && st.count(b) && st.count(c) &&
//             st.count(d))
//             if (check(x, y)) {
//                 cnt++;
//                 used.insert(p);
//             }
//     }
//     cout << cnt << '\n';
// }
//     vector<pair<int, int>> ps;
//     rep(i, 9) {
//         string s;
//         cin >> s;
//         rep(j, 9) {
//             if (s.at(j) == '#') {
//                 st.emplace(i, j);
//                 ps.emplace_back(i, j);
//             }
//         }
//     }
//     int N = ps.size();
//     int ans = 0;
//     rep(ai, N) rep(bi, N) {
//         if (ai == bi)
//             continue;
//         auto a = ps.at(ai), b = ps.at(bi);
//         int di = b.first - a.first, dj = b.second - a.second;
//         pair<int, int> c(b.first - dj, b.second + di);
//         pair<int, int> d(c.first - di, c.second - dj);
//         if (st.count(c) && st.count(d))
//             ans++;
//     }
//     ans /= 4;
//     cout << ans << '\n';
// }
