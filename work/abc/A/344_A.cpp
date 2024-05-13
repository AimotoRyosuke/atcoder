#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    bool is_between = false;
    for (int i = 0; i < (int)S.size(); i++) {
        char c = S.at(i);
        if (c == '|')
            is_between = !is_between;
        else if (!is_between)
            cout << c;
    }
    cout << endl;
}
