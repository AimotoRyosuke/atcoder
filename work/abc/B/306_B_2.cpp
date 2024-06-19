#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    ull base = 1;
    ull ans = 0;
    for (int i = 0; i < 64; i++) {
        int a;
        cin >> a;
        ans += a * base;
        base *= 2;
    }
    cout << ans << endl;
}
