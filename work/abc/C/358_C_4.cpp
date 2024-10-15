#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> V;
    rep(i, N) {
        string s;
        cin >> s;
        int x = 0;
        rep(j, M) {
            char c = s.at(j);
            if (c == 'o')
                x |= 1 << j;
        }
        V.push_back(x);
    }
    vector<int> order(N);
    iota(order.begin(), order.end(), 0);
    int ans = 11, t = (1 << M) - 1;
    do {
        int cnt = 0, x = 0;
        rep(i, N) {
            x |= V[order[i]];
            cnt++;
            if (x == t)
                break;
        }
        ans = min(ans, cnt);
    } while (next_permutation(order.begin(), order.end()));
    cout << ans << '\n';
}
