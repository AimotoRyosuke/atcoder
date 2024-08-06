#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> AS(N);
    for (auto &as : AS) {
        string s;
        cin >> s;
        rep(i, M) {
            if (s.at(i) == 'o')
                as |= 1 << i;
        }
    }
    vector<int> order(N);
    iota(order.begin(), order.end(), 0);
    int ans = N;
    int all = (1 << M) - 1;
    do {
        int a = 0;
        rep(i, N) {
            a |= AS.at(order[i]);
            if (a == all) {
                ans = min(ans, i + 1);
                break;
            }
        }

    } while (next_permutation(order.begin(), order.end()));
    cout << ans << '\n';
}
