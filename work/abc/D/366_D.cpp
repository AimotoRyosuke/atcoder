#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int s[102][102][102];

int main() {
    int N;
    cin >> N;
    rep(i, N) rep(j, N) rep(k, N) cin >> s[i + 1][j + 1][k + 1];
    rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i + 1][j][k] += s[i][j][k];
    rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i][j + 1][k] += s[i][j][k];
    rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i][j][k + 1] += s[i][j][k];

    int Q;
    cin >> Q;
    rep(i, Q) {
        int lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--, ly--, lz--;

        auto sum_z = [&](int x, int y, int lz, int rz) {
            return s[x][y][rz] - s[x][y][lz];
        };
        auto sum_yz = [&](int x, int ly, int ry, int lz, int rz) {
            return sum_z(x, ry, lz, rz) - sum_z(x, ly, lz, rz);
        };
        auto sum_xyz = [&](int lx, int rx, int ly, int ry, int lz, int rz) {
            return sum_yz(rx, ly, ry, lz, rz) - sum_yz(lx, ly, ry, lz, rz);
        };
        int ans = sum_xyz(lx, rx, ly, ry, lz, rz);
        cout << ans << '\n';
    }
}

// int s[102][102][102];

// int main() {
//     int N;
//     cin >> N;
//     rep(i, N) rep(j, N) rep(k, N) cin >> s[i + 1][j + 1][k + 1];
//     rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i + 1][j][k] += s[i][j][k];
//     rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i][j + 1][k] += s[i][j][k];
//     rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i][j][k + 1] += s[i][j][k];

//     int Q;
//     cin >> Q;
//     rep(qi, Q) {
//         int lx, rx, ly, ry, lz, rz;
//         cin >> lx >> rx >> ly >> ry >> lz >> rz;
//         lx--, ly--, lz--;
//         auto sum_z = [&](int x, int y, int lz, int rz) {
//             return s[x][y][rz] - s[x][y][lz];
//         };
//         auto sum_yz = [&](int x, int ly, int ry, int lz, int rz) {
//             return sum_z(x, ry, lz, rz) - sum_z(x, ly, lz, rz);
//         };
//         auto sum_xyz = [&](int lx, int rx, int ly, int ry, int lz, int rz) {
//             return sum_yz(rx, ly, ry, lz, rz) - sum_yz(lx, ly, ry, lz, rz);
//         };
//         int ans = sum_xyz(lx, rx, ly, ry, lz, rz);
//         cout << ans << '\n';
//     }
// }

// int s[102][102][102];

// int main() {
//     int N;
//     cin >> N;
//     rep(i, N) rep(j, N) rep(k, N) cin >> a[i][j][k];
//     rep(i, N) rep(j, N) rep(k, N) s[i + 1][j + 1][k + 1] = a[i][j][k];
//     rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i + 1][j][k] += s[i][j][k];
//     rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i][j + 1][k] += s[i][j][k];
//     rep(i, N + 1) rep(j, N + 1) rep(k, N + 1) s[i][j][k + 1] += s[i][j][k];
//     int Q;
//     cin >> Q;
//     rep(qi, Q) {
//         int lx, rx, ly, ry, lz, rz;
//         cin >> lx >> rx >> ly >> ry >> lz >> rz;
//         lx--, ly--, lz--;
//         auto sum_z = [&](int rx, int ry, int lz, int rz) {
//             return s[rx][ry][rz] - s[rx][ry][lz];
//         };
//         auto sum_yz = [&](int rx, int ly, int ry, int lz, int rz) {
//             return sum_z(rx, ry, lz, rz) - sum_z(rx, ly, lz, rz);
//         };
//         auto sum_xyz = [&](int lx, int rx, int ly, int ry, int lz, int rz) {
//             return sum_yz(rx, ly, ry, lz, rz) - sum_yz(lx, ly, ry, lz, rz);
//         };
//         int ans = sum_xyz(lx, rx, ly, ry, lz, rz);
//         cout << ans << '\n';
//     };
// }
