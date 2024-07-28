#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    string sw = "sweet", sl = "salty";
    bool ok = true;
    rep(i, N - 1) if (S.at(i) == sw && S.at(i + 1) == sw && i + 1 != N - 1) ok =
        false;
    cout << (ok ? "Yes" : "No") << '\n';
}
