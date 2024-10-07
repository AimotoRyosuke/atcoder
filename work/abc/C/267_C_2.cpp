#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;
    ll ans = -2 * 100000000000000000, before = 0, sum = 0;
    rep(i, N - M + 1) {
        if (i == 0) {
            rep(j, M) {
                before += (j + 1) * A.at(j);
                sum += A.at(j);
            }
        } else {
            before = before - sum + M * A.at(i + M - 1);
            sum = sum - A.at(i - 1) + A.at(i + M - 1);
        }
        ans = max(ans, before);
    }
    cout << ans << '\n';
}
