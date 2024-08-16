#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<map<int, bool>> C(M);
    int c, a;
    rep(i, M) {
        cin >> c;
        rep(j, c) {
            cin >> a;
            C.at(i)[a] = true;
        }
    }
    int cnt = 0;
    rep(s, 1 << M) {
        if (s == 0)
            continue;
        bool all_ok = true;
        rep(i, N) {
            int x = i + 1;
            bool ok = false;
            rep(j, M) if (s >> j & 1 && C.at(j)[x]) ok = true;
            if (!ok) {
                all_ok = false;
            }
        }
        if (all_ok)
            cnt++;
    }
    cout << cnt << '\n';
}
