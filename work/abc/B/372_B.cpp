#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> ans;
    int z = N % 3;
    rep(i, z) ans.push_back(0);
    N -= z;
    rep(i, 11) {
        int p = 10 - i;
        int mod = pow(3, p);
        int num = N / mod;
        rep(i, num) ans.push_back(p);
        N -= mod * num;
    }
    cout << ans.size() << '\n';
    rep(i, (int)ans.size()) cout << ans.at(i) << ' ';
}
