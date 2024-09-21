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
    int mx = 0;
    unordered_map<int, bool> used;
    auto f = [&](auto f, int cur) -> void {
        if (used[cur])
            return;
        mx = max(cur, mx);
        used[cur] = true;
        for (auto next : M[cur])
            f(f, next);
    };
    f(f, 1);
    cout << mx << '\n';
}
