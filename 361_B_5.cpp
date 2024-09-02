#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct P {
    int x, y, z;
    void input() { cin >> x >> y >> z; }
};

int main() {
    P p1, p2, p3, p4;
    p1.input(), p2.input(), p3.input(), p4.input();
    bool ok = true;
    if (min(p2.x, p4.x) <= max(p1.x, p3.x))
        ok = false;
    if (min(p2.y, p4.y) <= max(p1.y, p3.y))
        ok = false;
    if (min(p2.z, p4.z) <= max(p1.z, p3.z))
        ok = false;
    cout << (ok ? "Yes" : "No") << '\n';
}
