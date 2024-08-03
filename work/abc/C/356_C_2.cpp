#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> AS(M);
    vector<char> R(M);
    rep(i, M) {
        int c;
        cin >> c;
        rep(j, c) {
            int a;
            cin >> a;
            a--;
            AS[i] |= 1 << a;
        }
        cin >> R[i];
    }
    int ans = 0;
    rep(s, 1 << N) {
        bool ok = true;
        rep(i, M) {
            int num = __builtin_popcount(s & AS[i]);
            if ((num >= K) != (R[i] == 'o'))
                ok = false;
        }
        if (ok)
            ans++;
    }
    cout << ans << '\n';
}
