// 復習する
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll D;
    cin >> D;
    ll a = 1, b = 1;
    ll ans = 2000000000000;
    while (D - a * a > 0) {
        a++;
    }
    while (a >= b) {
        a--;
        while (D - a * a - b * b >= 0) {
            b++;
        }
        if (ans > -(D - a * a - b * b))
            ans = -(D - a * a - b * b);
        if (ans > D - a * a - (b - 1) * (b - 1))
            ans = D - a * a - (b - 1) * (b - 1);
        b--;
    }
    cout << ans << endl;
}
