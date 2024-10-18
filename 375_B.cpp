#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> X(N + 2), Y(N + 2);
    rep(i, N) { cin >> X[i + 1] >> Y[i + 1]; }
    double ans = 0;
    rep(i, N + 1) {
        ll dx = X[i] - X[i + 1], dy = Y[i] - Y[i + 1];
        ans += sqrt(dx * dx + dy * dy);
    }
    printf("%.10f\n", ans);
}
