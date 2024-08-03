// substrの定義がよくわかる
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int l, r;
    cin >> l >> r;
    string s = "atcoder";
    cout << s.substr(l - 1, r - l + 1) << '\n';
}
