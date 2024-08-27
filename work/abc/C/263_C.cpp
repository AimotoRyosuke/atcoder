#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> a;
    rep(s, 1 << M) {
        int num = __builtin_popcount(s);
        if (num != N)
            continue;
        vector<int> v;
        rep(i, M) {
            if (s >> i & 1)
                v.push_back(i + 1);
        }
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    rep(i, a.size()) {
        rep(j, N) cout << a.at(i).at(j) << ' ';
        cout << '\n';
    }
}
