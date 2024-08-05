#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll D;
    cin >> D;

    ll x = 1, y = 1;
    while (x * x <= D)
        x++;
    x--;
    ll ans = D;
    while (x >= y) {
        while (y * y < D - x * x) {
            y++;
        }
        ans = min(ans, abs(D - x * x - y * y));
        ans = min(ans, abs(D - x * x - (y - 1) * (y - 1)));
        x--;
    }
    cout << ans << '\n';
}
