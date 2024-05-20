#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    for (int i = 0; i < (int)S.size(); i++) {
        if (i == S.size() - 1)
            cout << 4 << endl;
        else
            cout << S.at(i);
    }
}
