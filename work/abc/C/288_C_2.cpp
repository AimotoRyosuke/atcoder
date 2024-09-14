#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    vector<bool> used(N);
    int s = 0;
    auto f = [&](auto f, int cur) {
        if (used[cur])
            return;
        used[cur] = true;
        for (auto &b : A[cur])
            f(f, b);
    };
    rep(i, N) {
        if (used[i])
            continue;
        s++;
        f(f, i);
    }
    cout << max(0, M - N + s) << '\n';
}
