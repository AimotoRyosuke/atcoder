#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    rep(i, N) cout << S.at(S.size() - 1 - i) << '\n';
}
