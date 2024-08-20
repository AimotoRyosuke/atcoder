#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N, Q;
    cin >> N >> Q;
    ll t, a, b;
    set<pair<int, int>> S;
    vector<bool> ans;
    rep(i, Q) {
        cin >> t >> a >> b;
        if (t == 1)
            S.insert({a, b});
        else if (t == 2)
            S.erase({a, b});
        else if (t == 3) {
            bool ok = S.count({a, b}) && S.count({b, a});
            ans.push_back(ok);
        }
    }
    rep(i, (int)ans.size()) cout << (ans.at(i) ? "Yes" : "No") << '\n';
}
