#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int start = 0, end = 0;
    rep(i, n) {
        if (s[i] == 'a')
            start++;
        else
            break;
    }
    rep(i, n) {
        if (s[n - 1 - i] == 'a')
            end++;
        else
            break;
    }
    bool ok = start <= end;
    if (ok) {
        s = string(end - start, 'a') + s;
        rep(i, (int)s.size() / 2) {
            if (s.at(i) != s.at(s.size() - 1 - i))
                ok = false;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
