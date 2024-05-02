#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, g, m;
    cin >> k >> g >> m;

    int gg = 0, mm = 0;

    for (int i = 0; i < k; i++) {
        if (gg == g) {
            gg = 0;
        } else if (mm == 0) {
            mm = m;
        } else {
            int loss = min((g - gg), mm);
            gg += loss;
            mm -= loss;
        }
    }
    cout << gg << ' ' << mm << endl;
}
