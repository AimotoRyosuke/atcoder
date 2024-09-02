#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Key {
    int c;
    int as = 0;
    bool open;
};

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<Key> keys(M);
    for (auto &key : keys) {
        cin >> key.c;
        rep(i, key.c) {
            int a;
            cin >> a;
            a--;
            key.as |= 1 << a;
        }
        char r;
        cin >> r;
        key.open = r == 'o';
    }
    int cnt = 0;
    rep(s, 1 << N) {
        bool ok = true;
        rep(i, M) {
            int num = __builtin_popcount(s & keys.at(i).as);
            if ((num >= K) != keys.at(i).open) {
                ok = false;
                break;
            }
        }
        if (ok)
            cnt++;
    }
    cout << cnt << '\n';
}
