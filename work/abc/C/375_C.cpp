#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> A(N);
    rep(i, N) cin >> A[i];

    vector<string> B = A;

    rep(i, N) {
        rep(j, N) {
            int ni = i, nj = j;
            int k = min({ni + 1, nj + 1, N - ni, N - nj});
            rep(ki, k % 4) {
                swap(ni, nj);
                nj = N - 1 - nj;
            }
            B[ni][nj] = A[i][j];
        }
    }
    rep(i, N) cout << B[i] << '\n';
}
