#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    if ((sx + sy) % 2 == 0)
        sx++;
    if ((tx + ty) % 2 == 0)
        tx++;
    ll dy = abs(ty - sy);
    ll dx = max(0LL, (abs(tx - sx) - dy) / 2);
    ll ans = dx + dy;
    cout << ans << '\n';
}
