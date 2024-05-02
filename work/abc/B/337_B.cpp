#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char current = ' ';
    for (int i = 0; i < (int)s.size(); i++) {
        char c = s.at(i);
        if (current == ' ') {
            current = c;
        } else if (current == 'A') {
            current = c;
        } else if (current == 'B') {
            if (c == 'A') {
                cout << "No" << endl;
                return 0;
            }
            current = c;
        } else if (current == 'C') {
            if (c == 'A' || c == 'B') {
                cout << "No" << endl;
                return 0;
            }
            current = c;
        }
    }
    cout << "Yes" << endl;
}
