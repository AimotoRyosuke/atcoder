#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    vector<int> order(s.size());
    iota(order.begin(), order.end(), 0);
    ll ans = 0;
    do {
        rep(i, (int)s.size() - 1) {
            int ni = i + 1;
            bool ok = true;
            string s1, s2;
            rep(j, ni) {
                if (j == 0 && s.at(order[j]) == 0)
                    ok = false;
                s1 += s.at(order[j]);
            }
            rep(j, s.size() - ni) {
                if (j == 0 && s.at(order[ni + j]) == 0)
                    ok = false;
                s2 += s.at(order[ni + j]);
            }
            if (!ok)
                continue;
            ans = max(ans, stoll(s1) * stoll(s2));
        }
    } while (next_permutation(order.begin(), order.end()));
    cout << ans << '\n';
}
