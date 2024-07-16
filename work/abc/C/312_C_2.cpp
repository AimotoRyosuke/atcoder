#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> B(M);
    for (auto &b : B)
        cin >> b;
    vector<pair<int, int>> events;
    rep(i, N) events.emplace_back(A.at(i), 0);
    rep(i, M) events.emplace_back(B.at(i) + 1, 1);
    int na = 0, nb = M;
    sort(events.begin(), events.end());
    int ans = 0;
    rep(i, N + M) {
        if (events.at(i).second)
            nb--;
        else
            na++;
        if (na == nb)
            ans = events.at(i).first;
    }
    cout << ans << '\n';
}
