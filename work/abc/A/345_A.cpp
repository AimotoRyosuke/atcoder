#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    bool ok = true;
    for (int i = 0; i < (int)S.size(); i++) {
        if (i == 0 && S.at(i) != '<') {
            ok = false;
            break;
        } else if (i == S.size() - 1 && S.at(i) != '>') {
            ok = false;
            break;
        } else if (i != 0 && i != S.size() - 1 && S.at(i) != '=') {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
