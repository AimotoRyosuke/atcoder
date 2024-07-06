// 復習する
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(K);
    for (auto &a : A)
        cin >> a;
    int ans = 0;
    if (K % 2 == 0) {
        rep(i, K / 2) { ans += A.at(i * 2 + 1) - A.at(i * 2); }
        cout << ans << endl;
        return 0;
    }
    vector<int> L(K / 2 + 1), R(K / 2 + 1);
    rep(i, K / 2 + 1) {
        if (i == 0) {
            L[i] = 0, R[K / 2] = 0;
        } else {
            L[i] = L[i - 1] + A.at(2 * i - 1) - A.at(2 * i - 2);
            R[K / 2 - i] = R[K / 2 - i + 1] - A.at(A.size() - 2 * i) +
                           A.at(A.size() - 2 * i + 1);
        }
    }
    ans = 200000;
    rep(i, K / 2 + 1) { ans = min(ans, L[i] + R[i]); }
    cout << ans << endl;
}
