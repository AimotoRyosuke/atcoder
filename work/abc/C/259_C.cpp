#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    map<int, pair<char, int>> s_map, t_map;
    int num = 0;
    rep(i, (int)s.size()) {
        if (i != 0 && s.at(i) != s.at(i - 1))
            num++;
        s_map[num].first = s.at(i);
        s_map[num].second++;
    }
    num = 0;
    rep(i, (int)t.size()) {
        if (i != 0 && t.at(i) != t.at(i - 1))
            num++;
        t_map[num].first = t.at(i);
        t_map[num].second++;
    }
    bool ok = true;
    if (t_map.size() != s_map.size())
        ok = false;
    for (auto &[k, v] : s_map) {
        if (s_map[k].first != t_map[k].first) {
            ok = false;
            break;
        }
        if (s_map[k].second == 1 && t_map[k].second > 1) {
            ok = false;
            break;
        }
        if (s_map[k].second > t_map[k].second) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
