#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    ull N;
    cin >> N;
    bitset<60> B(N);
    string bit_str = B.to_string();
    vector<int> p;
    rep(i, 60) {
        if (bit_str.at(i) == '1') {
            p.push_back(i);
        }
    }
    vector<ull> ans;
    rep(s, 1 << p.size()) {
        bitset<15> bit_s(s);
        string s_str = bit_s.to_string();
        string x = bit_str;
        rep(i, p.size()) {
            if (s_str.at(15 - p.size() + i) == '0') {
                x.at(p.at(i)) = '0';
            }
        }
        bitset<60> x_bit(x);
        ans.push_back(x_bit.to_ullong());
    }
    sort(ans.begin(), ans.end());
    rep(i, (int)ans.size()) cout << ans.at(i) << '\n';
}
