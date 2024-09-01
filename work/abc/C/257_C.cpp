#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    map<int, int> M;
    int st = 1e9, ad = 0;
    rep(i, N) {
        int w;
        cin >> w;
        w++;
        if (s.at(i) == '0') {
            M[w]++;
        } else {
            ad++;
            M[w]--;
        }
        st = min(st, w - 1);
    }
    M[st] = ad;
    int ans = 0, value = 0;
    for (auto &[k, v] : M) {
        value += v;
        ans = max(ans, value);
    }
    cout << ans << '\n';
}
