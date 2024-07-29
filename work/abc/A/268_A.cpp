#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool is_palindrome(string s) {
    bool ok = true;
    rep(i, (int)s.size() / 2) {
        if (s.at(i) != s.at(s.size() - 1 - i)) {
            ok = false;
            break;
        }
    }
    return ok;
}

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    unordered_set<int> A;
    A.insert(a);
    A.insert(b);
    A.insert(c);
    A.insert(d);
    A.insert(e);
    cout << A.size() << '\n';
}
