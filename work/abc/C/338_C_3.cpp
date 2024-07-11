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
    rep(i, 1000001) {
        bool ok = true;
        // iはAの数
        vector<int> R(N);
        rep(j, N) {
            if (Q.at(j) < A.at(j) * i)
                ok = false;
            R.at(j) = Q.at(j) - A.at(j) * i;
        }
        if (!ok)
            break;
        int min_b = 1000001;
        rep(j, N) {
            if (B.at(j) == 0)
                continue;
            min_b = min(min_b, R.at(j) / B.at(j));
        }
        ans = max(ans, i + min_b);
    }
    cout << ans << '\n';
}
