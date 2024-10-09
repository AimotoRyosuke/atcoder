#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> U(N);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        U[a].push_back(b);
        U[b].push_back(a);
    }
    vector<bool> used(N);
    auto f = [&](auto f, int cur) {
        if (used[cur])
            return;
        used[cur] = true;
        for (auto &u : U.at(cur)) {
            f(f, u);
        }
    };
    int s = 0;
    rep(i, N) {
        if (used[i])
            continue;
        s++;
        f(f, i);
    }
    int ans = M - (N - s);
    cout << ans << '\n';
}
