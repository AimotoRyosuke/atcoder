#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int get_diff_num(string s) {
    int cnt = 0;
    rep(i, (int)s.size() / 2) {
        if (s.at(i) != s.at(s.size() - 1 - i))
            cnt++;
    }
    return cnt;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    string s;
    cin >> s;
    ll mn = 1e18;
    rep(i, (int)s.size()) {
        if (i != 0) {
            s += s.at(0);
            s.erase(0, 1);
        }
        ll num = get_diff_num(s);
        mn = min(mn, (ll)i * A + num * B);
    }
    cout << mn << '\n';
}
