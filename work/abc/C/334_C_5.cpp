#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(K);
    for (auto &a : A)
        cin >> a;
    int num = K / 2 + 1;
    vector<int> L(num), R(num);
    rep(i, num) {
        if (i == 0) {
            L.at(i) = 0;
            R.at(num - 1) = 0;
        } else {
            L.at(i) = L.at(i - 1) + A.at(i * 2 - 1) - A.at(i * 2 - 2);
            R.at(num - 1 - i) =
                R.at(num - i) + A.at(K - i * 2 + 1) - A.at(K - i * 2);
        }
    }
    int ans = 1e9;
    rep(i, num) { ans = min(ans, L.at(i) + R.at(i)); }
    cout << ans << '\n';
}
