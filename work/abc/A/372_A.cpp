#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    rep(i, (int)s.size()) if (s.at(i) != '.') cout << s.at(i);
    cout << '\n';
}
