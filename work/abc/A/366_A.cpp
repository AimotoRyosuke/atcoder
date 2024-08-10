#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, T, A;
    cin >> N >> T >> A;
    bool ok = ((N + 1) / 2 <= T) || ((N + 1) / 2 <= A);
    cout << (ok ? "Yes" : "No") << '\n';
}
