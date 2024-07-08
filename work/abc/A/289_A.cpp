#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S;
    cin >> S;
    int N = S.size();
    rep(i, N) { cout << (S.at(i) == '0' ? 1 : 0); }
    cout << endl;
}
