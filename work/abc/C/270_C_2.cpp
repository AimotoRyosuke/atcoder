#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    X--, Y--;
    vector<vector<int>> P(N);
    rep(i, N - 1) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        P[u].push_back(v);
        P[v].push_back(u);
    }
    vector<bool> used(N);
    vector<int> ans;
    auto f = [&](auto f, int cur) -> bool {
        if (cur == X) {
            ans.push_back(cur);
            return true;
        }
        if (used[cur]) {
            return false;
        }
        used[cur] = true;
        for (auto ne : P[cur]) {
            if (f(f, ne)) {
                ans.push_back(cur);
                return true;
            }
        }
        return false;
    };
    f(f, Y);
    rep(i, (int)ans.size()) { cout << ans.at(i) + 1 << ' '; }
}
