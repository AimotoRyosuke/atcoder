#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ai = 100, bi = 100, ci = 100;
    rep(i, N) {
        if (S.at(i) == 'A')
            ai = min(ai, i);
        else if (S.at(i) == 'B')
            bi = min(bi, i);
        else if (S.at(i) == 'C')
            ci = min(ci, i);
    }
    cout << max(ai, max(bi, ci)) + 1 << endl;
}
