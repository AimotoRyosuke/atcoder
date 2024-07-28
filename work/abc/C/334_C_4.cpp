#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(K);
    for (auto &a : A)
        cin >> a;

    int M = K / 2 + 1;
    vector<int> l(M), r(M);
    rep(i, M) {
        if (i == 0) {
            l.at(0) = 0;
            r.at(M - 1) = 0;
        } else {
            l.at(i) = l.at(i - 1) + A.at((i - 1) * 2 + 1) - A.at((i - 1) * 2);
            r.at(M - i - 1) = r.at(M - i - 1 + 1) + A.at(K - 1 - (i - 1) * 2) -
                              A.at(K - 1 - (i - 1) * 2 - 1);
        }
    }
    int ans = 1000000000;
    rep(i, M) { ans = min(ans, l.at(i) + r.at(i)); }
    cout << ans << '\n';
}
