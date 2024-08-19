#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    int N = s.size();
    int ans = 0;
    rep(i, N) {
        if (s.at(i) != t.at(i)) {
            ans = i + 1;
            break;
        }
        if (i == N - 1)
            ans = i + 2;
    }
    cout << ans << '\n';
}
