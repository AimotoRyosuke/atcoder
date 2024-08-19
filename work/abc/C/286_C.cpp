#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

string op1(string s) { return s.substr(1, s.size()) + s.at(0); }

ll get_diff(string s) {
    ll cnt = 0;
    rep(i, (s.size()) / 2) {
        if (s.at(i) != s.at(s.size() - 1 - i)) {
            cnt++;
        }
    }
    return cnt;
}

struct State {
    string s;
    ll cnt_a, cnt_b;
};

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    string s;
    cin >> s;
    vector<State> states;
    rep(i, N) {
        if (i == 0) {
            states.push_back({s, (ll)i, get_diff(s)});
        } else {
            auto before = states.at(states.size() - 1);
            auto new_s = op1(before.s);
            states.push_back({new_s, (ll)i, get_diff(new_s)});
        }
    }
    ll ans = states.at(0).cnt_a * A + states.at(0).cnt_b * B;
    rep(i, N) {
        auto st = states.at(i);
        ans = min(ans, st.cnt_a * A + st.cnt_b * B);
    }
    cout << ans << '\n';
}
