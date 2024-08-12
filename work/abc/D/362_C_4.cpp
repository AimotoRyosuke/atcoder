#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> L(N), R(N);
    rep(i, N) cin >> L.at(i) >> R.at(i);
    ll l = accumulate(L.begin(), L.end(), 0LL);
    ll r = accumulate(R.begin(), R.end(), 0LL);
    if (l > 0 || r < 0) {
        cout << "No" << '\n';
        return 0;
    }

    l = -l;
    rep(i, N) {
        ll diff = min(l, (ll)R.at(i) - L.at(i));
        L.at(i) += diff;
        l -= diff;
        if (l == 0)
            break;
    }
    cout << "Yes" << '\n';
    rep(i, N) cout << L.at(i) << ' ';
}
