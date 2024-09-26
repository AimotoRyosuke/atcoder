#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    ull N;
    cin >> N;
    bitset<60> nb(N);
    string ns = nb.to_string();
    int num = __builtin_popcountll(N);
    vector<ull> ans;
    rep(s, 1 << num) {
        string x = ns;
        int k = 0;
        rep(i, (int)x.size()) {
            if (x[i] == '0')
                continue;
            if (s >> k & 1)
                x[i] = '0';
            k++;
        }
        bitset<60> xb(x);
        ull xll = xb.to_ullong();
        ans.push_back(xll);
    }
    sort(ans.begin(), ans.end());
    rep(i, (int)ans.size()) cout << ans[i] << '\n';
}
