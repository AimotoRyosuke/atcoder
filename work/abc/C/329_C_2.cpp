#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    map<int, int> cnt_map;
    int cnt = 0;
    rep(i, N) {
        cnt++;
        if (i == N - 1 || S.at(i + 1) != S.at(i)) {
            cnt_map[S.at(i)] = max(cnt_map[S.at(i)], cnt);
            cnt = 0;
        }
    }
    int ans = 0;
    for (auto &[k, v] : cnt_map) {
        ans += v;
    }
    cout << ans << endl;
}
