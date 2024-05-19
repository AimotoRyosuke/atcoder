#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    char c = S.at(0);
    bool ok = true;
    for (int i = 1; i < (int)S.size(); i++) {
        if (c - '0' > S.at(i) - '0') {
            ok = false;
            break;
        }
        c = S.at(i);
    }
    cout << (ok ? "Yes" : "No") << endl;
}
