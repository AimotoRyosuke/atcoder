#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    int N = s.size();
    map<char, int> s_map, t_map;
    rep(i, N) {
        s_map[s.at(i)]++;
        t_map[t.at(i)]++;
    }
    int at_num = s_map['@'] + t_map['@'];
    string tgt = "atcoder";
    bool ok = true;
    rep(i, 26) {
        char c = 'a' + i;
        int diff = abs(s_map[c] - t_map[c]);
        if (find(tgt.begin(), tgt.end(), c) != tgt.end()) {
            at_num -= diff;
            if (at_num < 0) {
                ok = false;
                break;
            }
        } else if (diff > 0) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
