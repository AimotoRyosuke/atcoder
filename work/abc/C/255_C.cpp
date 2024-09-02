#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll x, A, D, N;
    cin >> x >> A >> D >> N;
    x -= A - D;
    ll s = D == 0 ? 0 : x / D;
    if (D < 0 && x > 0)
        s = 1;
    else if (D > 0 && x < 0) {
        s = 1;
    } else {
        s = min(s, N - 1);
    }
    ll ans = 0;
    ans = min(abs(x - D * s), abs(D * (s + 1) - x));
    cout << ans << '\n';
}
