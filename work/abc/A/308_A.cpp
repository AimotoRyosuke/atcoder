#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A(8);
    bool ok = true;
    for (int i = 0; i < 8; i++) {
        int &a = A.at(i);
        cin >> a;
        if (a < 100 || a > 675 || a % 25 != 0 || (i != 0 && a < A.at(i - 1)))
            ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
