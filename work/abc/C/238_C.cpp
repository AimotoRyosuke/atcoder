#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
const int mod = 998244353;

int main() {
    ll N;
    cin >> N;
    ll value = 1;
    int digit = 1;
    while (true) {
        if (value * 10 > N)
            break;
        digit++;
        value *= 10;
    }
    ll ans = 0;
    for (int d = 1; d <= digit; d++) {
        ll mx = 9 * (ll)pow(10, d - 1) % mod;
        if (d == digit)
            mx = (N - (ll)pow(10, d - 1) + 1) % mod;
        ll sum = mx * (mx + 1) / 2 % mod;
        ans += sum;
    }
    cout << ans % mod << '\n';
}
