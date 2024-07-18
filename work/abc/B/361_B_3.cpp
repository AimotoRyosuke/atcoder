#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Point {
    int x, y, z;
};

Point input() {
    Point p;
    cin >> p.x >> p.y >> p.z;
    return p;
}

int main() {
    auto l1 = input();
    auto r1 = input();
    auto l2 = input();
    auto r2 = input();
    bool ok = true;
    if (l2.x - r1.x >= 0 || l1.x - r2.x >= 0)
        ok = false;
    if (l2.y - r1.y >= 0 || l1.y - r2.y >= 0)
        ok = false;
    if (l2.z - r1.z >= 0 || l1.z - r2.z >= 0)
        ok = false;
    cout << (ok ? "Yes" : "No") << '\n';
}
