#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    bool ok = false;
    if ((B % 3 != 1) && (B - A == 1)) {
        ok = true;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
