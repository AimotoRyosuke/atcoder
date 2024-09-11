#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    vector<string> X;
    vector<pair<bool, int>> P;
    int n = s.size();
    rep(i, n) {
        if (s.at(i) != t.at(i)) {
            P.push_back({s.at(i) < t.at(i), i});
        }
    }
    sort(P.begin(), P.end(), [](const auto &a, const auto &b) {
        if (a.first != b.first) {
            return a.first < b.first;
        }
        bool is_fast = a.first == 0;
        return is_fast ? a.second < b.second : a.second > b.second;
    });

    rep(i, (int)P.size()) {
        s.at(P.at(i).second) = t.at(P.at(i).second);
        X.push_back(s);
    }
    int an = X.size();
    cout << an << '\n';
    rep(i, an) cout << X.at(i) << '\n';
}
