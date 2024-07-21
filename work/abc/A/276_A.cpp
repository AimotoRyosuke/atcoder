#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S;
    cin >> S;
    int ia = -1;
    rep(i, (int)S.size()) {
        if (S.at(i) == 'a')
            ia = i + 1;
    }
    cout << ia << '\n';
}
