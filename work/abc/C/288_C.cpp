#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> C(N);
    int a, b;
    rep(i, M) {
        cin >> a >> b;
        a--, b--;
        C[a].push_back(b);
        C[b].push_back(a);
    }
    vector<bool> visited(N);
    auto f = [&](auto f, int cur) -> void {
        if (visited[cur]) {
            return;
        }
        visited[cur] = true;
        for (auto &b : C.at(cur)) {
            f(f, b);
        }
    };
    int s = 0;
    rep(i, N) {
        if (visited[i])
            continue;
        s++;
        f(f, i);
    }
    cout << max(0, M - N + s) << '\n';
}
