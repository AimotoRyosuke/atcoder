#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> divisors(N + 1);
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            // iが約数のものをjに追加
            divisors[j]++;
        }
    }
    ll ans = 0;
    for (int ab = 1; ab < N; ab++) {
        int cd = N - ab;
        ans += (ll)divisors[ab] * (ll)divisors[cd];
    }
    cout << ans << '\n';
}
