#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S;
    cin >> S;
    int ri = 0, mi = 0;
    rep(i, S.size()) if (S.at(i) == 'R') ri = i;
    else if (S.at(i) == 'M') mi = i;
    cout << (ri < mi ? "Yes" : "No") << endl;
}
