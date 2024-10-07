#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N;
    cin >> N;
    ll ans = 0;
    for (ll A = 1; A * A * A <= N; A++) {
        for (ll B = A; B * B * A <= N; B++) {
            ans += N / (A * B) - B + 1;
        }
    }
    cout << ans << '\n';
}
