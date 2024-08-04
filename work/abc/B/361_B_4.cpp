#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Point {
    int x, y, z;
    void input() { cin >> x >> y >> z; }
};

int main() {
    Point l1, r1, l2, r2;
    l1.input(), r1.input(), l2.input(), r2.input();
    bool ok = false;
    if (r1.x > l2.x && r1.y > l2.y && r1.z > l2.z && r2.x > l1.x &&
        r2.y > l1.y && r2.z > l1.z)
        ok = true;

    cout << (ok ? "Yes" : "No") << '\n';
}
