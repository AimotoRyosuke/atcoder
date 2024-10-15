#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, T;
    cin >> N >> T;
    bool hasT = false;
    vector<int> C(N);
    for (auto &a : C) {
        cin >> a;
        if (a == T)
            hasT = true;
    }
    vector<int> R(N);
    for (auto &a : R)
        cin >> a;
    map<int, pair<int, int>> P;
    rep(i, N) {
        auto c = C[i], r = R[i];
        if (!P.count(c) || P[c].first < r)
            P[c] = {r, i + 1};
    }
    int ans;
    if (hasT)
        ans = P[T].second;
    else
        ans = P[C[0]].second;
    cout << ans << '\n';
}
