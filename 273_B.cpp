#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll X, K;
    cin >> X >> K;
    rep(i, K) {
        if (X % (ll)pow(10, i + 1) >= (ll)pow(10, i) * 5) {
            X += (ll)pow(10, i) * 5;
            X -= X % (ll)pow(10, i + 1);
        } else {
            X -= X % (ll)pow(10, i + 1);
        }
    }
    cout << X << '\n';
}
