#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;
    ll sum = (N - 1) * accumulate(A.begin(), A.end(), 0LL);
    sort(A.begin(), A.end());
    int l = -1, r = N - 1;
    ll cnt = 0;
    const ll MOD = 1e8;
    while (l != r) {
        while (l + 1 != r && A.at(l + 1) + A.at(r) < MOD) {
            l++;
        }
        cnt += r - (l + 1);
        r--;
    }
    ll ans = sum - cnt * MOD;
    cout << ans << '\n';
}
