#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    map<char, int> nums;
    rep(i, (int)s.size()) { nums[s.at(i)]++; }
    if (nums.size() == 1) {
        cout << -1 << '\n';
    }
    char ans = ' ';
    for (auto &[key, value] : nums)
        if (value == 1)
            ans = (char)key;
    cout << (char)ans << '\n';
}
