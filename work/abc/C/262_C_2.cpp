#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    for (auto &a : A) {
        cin >> a;
        a--;
    }
    ll same = 0;
    ll diff = 0;
    rep(i, N) {
        if (A.at(i) == i) {
            same++;
        } else if (A.at(A.at(i)) == i) {
            diff++;
        }
    }
    ll same_cnt = max(0LL, same * (same - 1) / 2);
    ll diff_cnt = diff / 2;
    ll ans = same_cnt + diff_cnt;
    cout << ans << '\n';
}
