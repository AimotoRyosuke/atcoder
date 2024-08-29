#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N, X, Y;
    cin >> N >> X >> Y;
    map<ll, ll> B, R;
    R[N] = 1;
    auto canTransB = [&]() -> bool {
        bool ok = false;
        for (auto &[k, v] : B) {
            if (k <= 1)
                continue;
            if (v > 0) {
                ok = true;
                break;
            }
        }
        return ok;
    };
    auto canTransR = [&]() -> bool {
        bool ok = false;
        for (auto &[k, v] : R) {
            if (k <= 1)
                continue;
            if (v > 0) {
                ok = true;
                break;
            }
        }
        return ok;
    };
    auto transB = [&]() -> void {
        for (auto &[k, v] : B) {
            if (k <= 1)
                continue;
            if (v > 0) {
                R[k - 1] += v, B[k - 1] += Y * v;
                v = 0;
            }
        }
    };
    auto transR = [&]() -> void {
        for (auto &[k, v] : R) {
            if (k <= 1)
                continue;
            if (v > 0) {
                R[k - 1] += v, B[k] += X * v;
                v = 0;
            }
        }
    };

    while (canTransB() || canTransR()) {
        transB();
        transR();
    }
    cout << B[1] << '\n';
}
