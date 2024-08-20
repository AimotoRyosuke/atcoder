#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    unordered_map<int, vector<int>> M;
    rep(i, N) {
        int a, b;
        cin >> a >> b;
        M[a].push_back(b);
        M[b].push_back(a);
    }
    map<int, bool> used;
    int ans = 1;
    auto f = [&](auto f, int cur) -> void {
        ans = max(ans, cur);
        if (used[cur])
            return;
        used[cur] = true;
        for (auto next : M[cur]) {
            f(f, next);
        }
    };
    for (auto next : M[1]) {
        f(f, next);
    }
    cout << ans << '\n';
}
