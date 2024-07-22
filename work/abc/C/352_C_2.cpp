#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N;
    cin >> N;
    ll M = 0;
    ll sum = 0;
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        sum += a;
        M = max(M, b - a);
    }
    cout << sum + M << '\n';
}
