//  型long longの仕様
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    if (x >= 0 && x % 10)
        cout << (x / 10) + 1 << endl;
    else
        cout << (x / 10) << endl;
}
