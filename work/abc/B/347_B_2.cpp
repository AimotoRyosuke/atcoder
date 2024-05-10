#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    set<string> parts;
    for (int i = 0; i < (int)S.size(); i++) {
        for (int j = 1; j <= (int)S.size() - i; j++) {
            parts.insert(S.substr(i, j));
        }
    }
    cout << parts.size() << endl;
}
