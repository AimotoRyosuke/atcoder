#include <bits/stdc++.h>
using namespace std;

const vector<string> L = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

int main() {
    string S;
    cin >> S;
    bool ok = false;
    for (int i = 0; i < (int)L.size(); i++) {
        if (S == L.at(i))
            ok = true;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
