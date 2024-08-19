#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> UV(N);
    rep(i, M) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        UV.at(u).push_back(v);
        UV.at(v).push_back(u);
    }

    vector<bool> visited(N);
    bool ok = true;
    auto f = [&](auto f, int cur, int prev) -> void {
        if (visited[cur]) {
            ok = false;
            return;
        }
        visited[cur] = true;
        if (UV[cur].size() > 2) {
            ok = false;
            return;
        }
        for (auto &v : UV[cur]) {
            if (v == prev) {
                continue;
            }
            f(f, v, cur);
        }
    };
    f(f, 0, -1);
    rep(i, N) {
        if (!visited[i]) {
            ok = false;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
