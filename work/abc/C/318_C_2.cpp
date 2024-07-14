#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N, D, P;
    cin >> N >> D >> P;
    vector<ll> F(N);
    rep(i, N) cin >> F.at(i);
    sort(F.rbegin(), F.rend());
    ll tot = 0;
    for (int i = 0; i < N; i += D) {
        ll pay = 0;
        rep(j, D) {
            if (i + j >= N)
                break;
            pay += F.at(i + j);
        }
        tot += min(P, pay);
    }
    cout << tot << '\n';
}
