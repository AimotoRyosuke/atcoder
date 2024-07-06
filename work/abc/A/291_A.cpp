#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S;
    cin >> S;
    rep(i, S.size()) {
        if (S.at(i) - 'A' >= 0 && S.at(i) - 'A' < 26) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
