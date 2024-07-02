// 復習する
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> Q(N);
    for (auto &q : Q)
        cin >> q;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> B(N);
    for (auto &b : B)
        cin >> b;
    int ans = 0;
    for (int x = 0;; x++) {
        vector<int> R(N);
        bool ok = true;
        rep(i, N) {
            R[i] = Q[i] - A[i] * x;
            if (R[i] < 0)
                ok = false;
        };
        if (!ok) {
            break;
        }
        int y = 1001001;
        rep(i, N) {
            if (B[i] == 0)
                continue;
            y = min(y, R[i] / B[i]);
        };
        ans = max(ans, x + y);
    }
    cout << ans << endl;
}
