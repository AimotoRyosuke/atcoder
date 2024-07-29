#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<vector<int>>> path(N);
    rep(i, M) {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        path[a].push_back({b, c});
        path[b].push_back({a, c});
    }
    int D = 0;
    auto f = [&](auto f, int cur, vector<bool> used, int d) -> void {
        D = max(D, d);
        used[cur] = true;
        for (auto &next : path[cur]) {
            if (used[next[0]])
                continue;
            f(f, next[0], used, d + next[1]);
        }
        return;
    };
    rep(i, N) f(f, i, vector<bool>(N), 0);
    cout << D << '\n';
}
