#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> C(N);
    for (auto &c : C)
        cin >> c;
    int ans = -1;
    int AB = A + B;
    rep(i, N) {
        if (C.at(i) == AB) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}
