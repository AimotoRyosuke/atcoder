#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    bool ok = b == a * 2 || b == a * 2 + 1;
    cout << (ok ? "Yes" : "No") << '\n';
}
