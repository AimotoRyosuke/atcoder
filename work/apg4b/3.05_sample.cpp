#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    bool ok = false;
    rep(s, 1 << N) {
        int sum = 0;
        rep(i, N) {
            if (s >> i & 1) {
                sum += A.at(i);
            }
        }
        if (sum == K) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
}
