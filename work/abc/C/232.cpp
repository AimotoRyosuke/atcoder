#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<bool>> AB(N, vector<bool>(N)), CD(N, vector<bool>(N));
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        AB[a][b] = true;
        AB[b][a] = true;
    }
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        CD[a][b] = true;
        CD[b][a] = true;
    }
    vector<int> order(N);
    iota(order.begin(), order.end(), 0);
    bool ans = false;
    do {
        bool ok = true;
        rep(i, N) {
            rep(j, N) {
                if (AB[i][j] != CD[order[i]][order[j]])
                    ok = false;
            }
        }
        if (ok) {
            ans = true;
            break;
        }
    } while (next_permutation(order.begin(), order.end()));
    cout << (ans ? "Yes" : "No") << '\n';
}
