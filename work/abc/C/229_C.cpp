#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, W;
    cin >> N >> W;
    vector<pair<ll, int>> P(N);
    rep(i, N) { cin >> P[i].first >> P[i].second; }
    sort(P.rbegin(), P.rend());
    int cur = 0, i = 0;
    ll ans = 0;
    while (cur < W && i < N) {
        int r = W - cur;
        ans += P.at(i).first * min(r, P.at(i).second);
        cur += P.at(i).second;
        i++;
    }
    cout << ans << '\n';
}
