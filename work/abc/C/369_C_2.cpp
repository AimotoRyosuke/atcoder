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
    int l = 0, r = 0;
    ll ans = N;
    if (N > 1) {
        while (true) {
            if (l == N - 1)
                break;
            int d = A.at(l + 1) - A.at(l);
            r = l;
            while (r != N - 1 && A.at(r + 1) - A.at(r) == d)
                r++;
            ll diff = r - l + 1;
            ll c = diff * (diff - 1) / 2;
            ans += c;
            l = r;
        }
    }
    cout << ans << '\n';
}
