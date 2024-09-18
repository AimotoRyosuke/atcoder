#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> V(N);
    rep(i, M) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        V[u].push_back(v);
        V[v].push_back(u);
    }
    vector<bool> used(N);
    bool ok = true;
    auto f = [&](auto f, int cur, int prev) -> void {
        if (used[cur]) {
            ok = false;
            return;
        }
        if (V[cur].size() > 2) {
            ok = false;
            return;
        }
        used[cur] = true;
        for (auto &v : V[cur]) {
            if (v == prev)
                continue;
            f(f, v, cur);
        }
    };
    f(f, 0, -1);
    rep(i, N) if (!used[i]) ok = false;
    cout << (ok ? "Yes" : "No") << '\n';
}
