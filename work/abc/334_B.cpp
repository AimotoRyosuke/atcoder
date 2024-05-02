// 復習する
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, m, l, r;
    cin >> a >> m >> l >> r;
    ll max = r - a, min = l - a;
    if (max >= 0 && min <= 0)
        // 0を含むため1足す
        cout << max / m - min / m + 1 << endl;
    else {
        ll result = max / m - min / m;
        if (max <= 0 && max % m == 0) {
            ++result;
        } else if (min >= 0 && min % m == 0) {
            ++result;
        }
        cout << result << endl;
    }
}
