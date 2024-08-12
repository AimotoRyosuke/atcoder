#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    int cnt = 0, cur = 0;
    rep(i, N) {
        if (s.at(i) == '-') {
            cnt = max(cnt, cur);
            cur = 0;
        } else
            cur++;
        if (cur != N && i == N - 1 && s.at(i - cur) == '-') {
            cnt = max(cnt, cur);
        }
    }
    if (cnt == 0)
        cnt = -1;
    cout << cnt << '\n';
}
