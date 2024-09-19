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
    vector<string> ss(W), ts(W);
    rep(i, W) {
        int xs = 0, xt = 0;
        rep(j, H) {
            ss[i] += S[j][i];
            ts[i] += T[j][i];
        }
    }
    sort(ss.begin(), ss.end());
    sort(ts.begin(), ts.end());
    cout << (ss == ts ? "Yes" : "No") << '\n';
}
