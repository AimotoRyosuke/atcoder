#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> L(N), R(N);
    rep(i, N) cin >> L.at(i) >> R.at(i);
    ll l_sum = accumulate(L.begin(), L.end(), 0LL);
    ll r_sum = accumulate(R.begin(), R.end(), 0LL);
    if (l_sum > 0 || r_sum < 0) {
        cout << "No" << '\n';
        return 0;
    }
    for (int i = 0;; i++) {
        ll diff = R.at(i) - L.at(i);
        L.at(i) += min(-l_sum, diff);
        l_sum += min(-1 * l_sum, diff);
        if (l_sum >= 0)
            break;
    }
    cout << "Yes" << '\n';
    rep(i, N) cout << L.at(i) << ' ';
}
