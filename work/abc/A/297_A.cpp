#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, D;
    cin >> N >> D;
    vector<int> T(N);
    for (auto &t : T)
        cin >> t;
    int ans = -1;
    rep(i, N - 1) {
        if (T.at(i + 1) - T.at(i) <= D) {
            ans = T.at(i + 1);
            break;
        }
    }
    cout << ans << endl;
}
