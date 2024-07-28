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
    for (int x = 0; x <= 1000000; x++) {
        vector<int> R(N);
        bool ok = true;
        rep(i, N) {
            if (Q.at(i) - A.at(i) * x >= 0)
                R.at(i) = Q.at(i) - A.at(i) * x;
            else
                ok = false;
        }
        if (!ok)
            break;
        int y = 1000000;
        rep(i, N) {
            if (B.at(i) == 0)
                continue;
            y = min(y, R.at(i) / B.at(i));
        }
        ans = max(ans, x + y);
    }
    cout << ans << '\n';
}
