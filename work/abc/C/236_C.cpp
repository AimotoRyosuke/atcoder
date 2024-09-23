#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    vector<string> T(M);
    for (auto &t : T)
        cin >> t;
    int ti = 0;
    rep(i, N) {
        bool ok = S.at(i) == T.at(ti);
        cout << (ok ? "Yes" : "No") << '\n';
        if (ok)
            ti++;
    }
}
