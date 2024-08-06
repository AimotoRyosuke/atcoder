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
    ll diff_x = abs(tx - sx);
    ll diff_y = abs(ty - sy);
    ll ans = (diff_y + max(diff_x, diff_y)) / 2;
    cout << ans << '\n';
}
