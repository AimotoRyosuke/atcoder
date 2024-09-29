#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N, A, B, P, Q, R, S;
    cin >> N >> A >> B >> P >> Q >> R >> S;
    ll l1 = max(1 - A, 1 - B);
    ll r1 = min(N - A, N - B);
    ll l2 = max(1 - A, B - N);
    ll r2 = min(N - A, B - 1);
    int y = Q - P + 1, x = S - R + 1;
    rep(i, y) {
        rep(j, x) {
            ll ni = P + i, nj = R + j;
            if (ni - nj == A - B || ni + nj == A + B)
                cout << "#";
            else
                cout << ".";
        }
        cout << '\n';
    }
}
