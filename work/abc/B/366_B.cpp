#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    int M = 0;
    for (auto &s : S) {
        cin >> s;
        M = max(M, (int)s.size());
    }
    vector<string> ans(M);
    rep(i, M) {
        rep(j, N) {
            string s = S.at(j);
            int len = s.size();
            if (len - 1 < i && ans.at(i).size() == 0) {
                continue;
            } else if (len - 1 < i) {
                ans.at(i) = '*' + ans.at(i);
            } else {
                ans.at(i) = s.at(i) + ans.at(i);
            }
        }
    }
    rep(i, M) { cout << ans.at(i) << '\n'; }
}
