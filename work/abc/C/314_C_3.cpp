#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    string s;
    cin >> s;
    vector<vector<int>> C_map(M);
    rep(i, N) {
        int c = 0;
        cin >> c;
        c--;
        C_map[c].push_back(i);
    }
    vector<int> order(N);
    rep(i, M) {
        auto C = C_map[i];
        int size = C.size();
        rep(j, size) {
            if (j == size - 1) {
                order[C[0]] = C[j];
            } else {
                order[C[j + 1]] = C[j];
            }
        }
    }
    rep(i, N) { cout << s[order[i]]; }
    cout << '\n';
}
