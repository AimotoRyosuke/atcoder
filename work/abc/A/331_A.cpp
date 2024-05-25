#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;

    if (m == M && d == D) {
        y++, m = 1, d = 1;
    } else if (d == D) {
        m++, d = 1;
    } else {
        d++;
    }
    cout << y << " " << m << " " << d << endl;
}
