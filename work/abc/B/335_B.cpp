#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n - x; y++) {
            for (int z = 0; z <= n - x - y; z++) {
                cout << x << " " << y << " " << z << endl;
            }
        }
    }
}
