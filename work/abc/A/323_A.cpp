#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    bool ok = true;
    for (int i = 1; i < (int)S.size(); i += 2) {
        if (S.at(i) != '0') {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}
