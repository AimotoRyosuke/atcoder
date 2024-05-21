#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll A, M, L, R;
    cin >> A >> M >> L >> R;

    ll l = L - A, r = R - A;
    if (l <= 0 && r > 0)
        cout << r / M - l / M + 1 << endl;
    else if (r < 0)
        if (r % M == 0)
            cout << -l / M - -r / M + 1 << endl;
        else
            cout << r / M - l / M << endl;
    else {
        if (l % M == 0)
            cout << r / M - l / M + 1 << endl;
        else
            cout << r / M - l / M << endl;
    }
}
