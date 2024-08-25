#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    for (auto &r : R)
        cin >> r;
    vector<int> cur(N, 1);
    while (cur.at(0) <= R.at(0)) {
        if (accumulate(cur.begin(), cur.end(), 0) % K == 0) {
            rep(i, N) cout << cur.at(i) << ' ';
            cout << '\n';
        }
        cur.at(N - 1)++;
        rep(i, N - 1) {
            if (cur.at(N - 1 - i) > R.at(N - 1 - i)) {
                cur.at(N - 1 - i) = 1;
                cur.at(N - 1 - i - 1)++;
            }
        }
    }
}
