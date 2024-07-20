#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> P(N);
    for (auto &p : P)
        cin >> p;
    rep(i, N) {
        if (P.at(i) == X) {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    return 0;
}
