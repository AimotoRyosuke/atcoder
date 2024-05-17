#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    bool ok = true;
    for (int i = 0; i < (int)S.size(); i++) {
        if (i == 0) {
            if (!isupper(S.at(i))) {
                ok = false;
                break;
            }
        } else {
            if (isupper(S.at(i))) {
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}
