#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> ans;
    rep(s, 1 << 10) {
        ll x = 0;
        rep(i, 10) {
            if (s >> (9 - i) & 1) {
                x = x * 10 + (9 - i);
            }
        }
        if (x == 0)
            continue;
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    cout << ans.at(N - 1) << '\n';
}
