#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S;
    cin >> S;
    rep(i, S.size() / 2) {
        char temp = S.at(2 * i);
        S.at(2 * i) = S.at(2 * i + 1);
        S.at(2 * i + 1) = temp;
    }
    cout << S << endl;
}
