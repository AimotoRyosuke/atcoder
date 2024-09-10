#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N, K, X;
    cin >> N >> K >> X;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;
    sort(A.rbegin(), A.rend());
    ll i = 0;
    while (i < N && A.at(i) > X && K > 0) {
        ll k = min(A.at(i) / X, K);
        A.at(i) -= k * X;
        K -= k;
        i++;
    }
    sort(A.begin(), A.end());
    ll ans = 0;
    rep(i, N - K) { ans += A.at(i); }
    cout << ans << '\n';
}
