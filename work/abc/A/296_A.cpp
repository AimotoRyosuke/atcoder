#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    bool ok = true;
    rep(i, N - 1) {
        if (S.at(i) == S.at(i + 1))
            ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
