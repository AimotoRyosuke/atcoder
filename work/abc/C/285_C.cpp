#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int N = s.size();
    ll ans = 0;
    rep(i, N) { ans += (s.at(N - 1 - i) - 'A' + 1) * (ll)pow(26, i); }
    cout << ans << '\n';
}
