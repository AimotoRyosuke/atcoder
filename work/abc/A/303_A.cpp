#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S, T;
    cin >> S >> T;
    bool ok = true;
    for (int i = 0; i < N; i++) {
        char s = S.at(i), t = T.at(i);
        if (s == t)
            continue;
        else if (s == '1' && t == 'l')
            continue;
        else if (s == 'l' && t == '1')
            continue;
        else if (s == '0' && t == 'o')
            continue;
        else if (s == 'o' && t == '0')
            continue;
        else
            ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
