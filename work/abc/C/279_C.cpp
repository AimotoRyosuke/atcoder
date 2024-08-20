#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (auto &s : S)
        cin >> s;
    vector<string> T(H);
    for (auto &t : T)
        cin >> t;
    vector<string> s(W), t(W);
    rep(j, W) {
        rep(i, H) {
            s.at(j) += S.at(i).at(j);
            t.at(j) += T.at(i).at(j);
        }
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    bool ok = s == t;
    cout << (ok ? "Yes" : "No") << '\n';
}
