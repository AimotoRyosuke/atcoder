#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;
    int diff = min(N, X) - M;
    int ans = T - diff * D;
    if (X < M)
        ans = T;
    cout << ans << '\n';
}
