#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    int mg, mh;
    vector<vector<bool>> G(N, vector<bool>(N)), H(N, vector<bool>(N));
    cin >> mg;
    rep(i, mg) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        G[u][v] = true;
        G[v][u] = true;
    }
    cin >> mh;
    rep(i, mh) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        H[u][v] = true;
        H[v][u] = true;
    }
    vector<vector<int>> A(N, vector<int>(N));
    rep(i, N) rep(j, N) {
        if (i < j) {
            int a;
            cin >> a;
            A.at(i).at(j) = a;
            A.at(j).at(i) = a;
        }
    }

    int mn = 1000000000;
    vector<int> order(N);
    iota(order.begin(), order.end(), 0);
    do {
        int now = 0;
        rep(i, N) rep(j, i) {
            if (H[i][j] != G[order[i]][order[j]]) {
                now += A[i][j];
            }
        }
        mn = min(mn, now);
    } while (next_permutation(order.begin(), order.end()));
    cout << mn << '\n';
}
