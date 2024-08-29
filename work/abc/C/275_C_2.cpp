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
