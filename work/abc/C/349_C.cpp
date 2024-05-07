#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    bool ok = true;
    int p = 0;
    for (int i = 0; i < 3; i++) {
        char t = T.at(i);
        if (i == 2 && t == 'X') {
            break;
        }
        for (int j = p; j < (int)S.size(); j++) {
            if (tolower(t) == tolower(S.at(j))) {
                p = j + 1;
                goto go_exit;
            }
        }
        ok = false;
        break;
    go_exit:
        continue;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
