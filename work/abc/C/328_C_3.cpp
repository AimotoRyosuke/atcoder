#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<int> A(N), ans(Q);
    rep(i, N - 1) {
        A.at(i + 1) = A.at(i);
        if (S.at(i) == S.at(i + 1))
            A.at(i + 1)++;
    }
    rep(i, Q) {
        int l, r;
        cin >> l >> r;
        ans.at(i) = A.at(r - 1) - A.at(l - 1);
    }
    rep(i, Q) cout << ans.at(i) << '\n';
}
