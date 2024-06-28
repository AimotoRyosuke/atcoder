#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    bool good = false, bad = false;
    rep(i, S.size()) if (S.at(i) == 'o') good = true;
    else if (S.at(i) == 'x') bad = true;
    bool ok = good && !bad;
    cout << (ok ? "Yes" : "No") << endl;
}
