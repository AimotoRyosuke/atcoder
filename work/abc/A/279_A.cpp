#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S;
    cin >> S;
    int v = 0, w = 0;
    rep(i, S.size()) {
        if (S.at(i) == 'v')
            v++;
        else
            w++;
    }
    cout << v + 2 * w << '\n';
}
