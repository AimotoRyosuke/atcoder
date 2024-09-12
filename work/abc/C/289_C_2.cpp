#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    int x = (1 << N) - 1;
    vector<int> S;
    rep(i, M) {
        int c;
        cin >> c;
        int y = 0;
        rep(i, c) {
            int a;
            cin >> a;
            a--;
            y |= 1 << a;
        }
        S.push_back(y);
    }
    int cnt = 0;
    rep(s, 1 << M) {
        int y = 0;
        rep(i, M) {
            if (s >> i & 1)
                y |= S.at(i);
        }
        if (x == y)
            cnt++;
    }
    cout << cnt << '\n';
}
