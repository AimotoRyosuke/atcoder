#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S;
    cin >> S;
    transform(S.begin(), S.end(), S.begin(), ::toupper);
    cout << S << endl;
}
