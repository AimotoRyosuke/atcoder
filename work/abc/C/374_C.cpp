#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    int i = 0;
    sort(A.rbegin(), A.rend());
    ll ans = 1e10;
    rep(s, 1 << N) {
        ll sa = 0, sb = 0;
        rep(i, N) {
            if (s >> i & 1) {
                sa += A.at(i);
            } else {
                sb += A.at(i);
            }
        }
        ans = min(ans, max(sa, sb));
    }
    cout << ans << '\n';
}
