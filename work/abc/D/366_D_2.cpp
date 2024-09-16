#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int A[102][102][102];

int main() {
    int N;
    cin >> N;
    rep(i, N) rep(j, N) rep(k, N) cin >> A[i + 1][j + 1][k + 1];
    rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) A[i + 1][j][k] += A[i][j][k];
    rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) A[i][j + 1][k] += A[i][j][k];
    rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) A[i][j][k + 1] += A[i][j][k];
    int q;
    cin >> q;
    rep(i, q) {
        int lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--, ly--, lz--;
        auto sum_z = [&](int x, int y) { return A[x][y][rz] - A[x][y][lz]; };
        auto sum_yz = [&](int x) { return sum_z(x, ry) - sum_z(x, ly); };
        auto sum_xyz = [&]() { return sum_yz(rx) - sum_yz(lx); };
        int ans = sum_xyz();
        cout << ans << '\n';
    }
}
