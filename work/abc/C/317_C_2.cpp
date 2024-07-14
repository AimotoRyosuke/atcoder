#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<vector<int>>> D(N);
    rep(i, M) {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        D[a].push_back({b, c});
        D[b].push_back({a, c});
    }

    int ans = 0;
    auto f = [&](auto f, int v, vector<bool> used, int len) -> void {
        ans = max(ans, len);
        used.at(v) = true;
        for (auto &next : D.at(v)) {
            if (used.at(next.at(0)))
                continue;
            f(f, next.at(0), used, len + next.at(1));
        }
    };
    rep(i, N) f(f, i, vector<bool>(N), 0);
    cout << ans << '\n';
}
