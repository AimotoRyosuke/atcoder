#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    string s;
    cin >> s;
    auto t = s;
    vector<char> ans;
    int base = 0;
    rep(i, Q) {
        int num, x;
        cin >> num >> x;
        if (num == 1) {
            base += x;
            base %= N;
        } else if (num == 2) {
            ans.push_back(s.at((x - 1 - base + N) % N));
        }
    }
    rep(i, (int)ans.size()) cout << ans.at(i) << '\n';
}
