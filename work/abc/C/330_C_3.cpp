#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll D;
    cin >> D;
    ll a = 1, b = 1;
    while (a * a <= D) {
        a++;
    }
    ll m = 2000000000000;
    while (a > b) {
        a--;
        while (b * b <= D - a * a) {
            b++;
        }
        m = min(m, abs(D - a * a - b * b));
        m = min(m, abs(D - a * a - (b - 1) * (b - 1)));
    }
    cout << m << '\n';
}
