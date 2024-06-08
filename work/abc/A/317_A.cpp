#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, H, X;
    cin >> N >> H >> X;
    vector<int> P(N);
    for (auto &p : P)
        cin >> p;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int p = P.at(i);
        if (H + p >= X) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}
