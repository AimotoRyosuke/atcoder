#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    rep(i, M) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<bool> used(N);
    auto f = [&](auto f, int cur) {
        if (used[cur])
            return;
        used[cur] = true;
        for (auto &v : G.at(cur)) {
            f(f, v);
        }
    };
    int cnt = 0;
    rep(i, N) {
        if (!used[i]) {
            cnt++;
            f(f, i);
        }
    }
    cout << cnt << '\n';
}
