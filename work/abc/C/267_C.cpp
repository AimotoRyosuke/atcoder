#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;
    vector<ll> B(N);
    ll cur;
    rep(i, N - M + 1) {
        if (i == 0) {
            cur = 0;
            rep(j, M) { cur += A.at(i + j); }
        } else {
            cur += -A.at(i - 1) + A.at(i + M - 1);
        }
        B.at(i) = cur;
    }
    ll mx = -10000000000000000;
    rep(i, N - M + 1) {
        if (i == 0) {
            cur = 0;
            rep(j, M) { cur += (j + 1) * A.at(i + j); }
        } else {
            cur += -B.at(i - 1) + A.at(i + M - 1) * M;
        }
        mx = max(mx, cur);
    }
    cout << mx << '\n';
}
