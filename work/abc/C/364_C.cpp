#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = long long;

int main() {
    int N;
    ull X, Y;
    cin >> N >> X >> Y;
    vector<ull> A(N);
    for (auto &a : A)
        cin >> a;
    vector<ull> B(N);
    for (auto &b : B)
        cin >> b;
    ull sum_a = 0, sum_b = 0;
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    int ans = N;
    rep(i, N) {
        sum_a += A.at(i);
        sum_b += B.at(i);
        if (sum_a > X || sum_b > Y) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << '\n';
}
