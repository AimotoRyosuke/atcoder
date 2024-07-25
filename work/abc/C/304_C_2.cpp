#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int distanceSqr(int x, int y, int x2, int y2) {
    return (x - x2) * (x - x2) + (y - y2) * (y - y2);
}

int main() {
    int N, D;
    cin >> N >> D;
    D *= D;
    vector<pair<int, int>> P(N);
    for (auto &p : P)
        cin >> p.first >> p.second;
    vector<bool> ans(N);
    auto f = [&](auto f, pair<int, int> p, int index) -> void {
        ans[index] = true;
        rep(i, N) {
            auto p2 = P.at(i);
            if (ans.at(i) ||
                distanceSqr(p.first, p.second, p2.first, p2.second) > D)
                continue;
            f(f, p2, i);
        }
    };
    f(f, P.at(0), 0);
    rep(i, N) cout << (ans.at(i) ? "Yes" : "No") << '\n';
}
