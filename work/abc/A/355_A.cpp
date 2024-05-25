#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A == B) {
        cout << -1 << endl;
        return 0;
    }
    cout << 6 - A - B << endl;
}
