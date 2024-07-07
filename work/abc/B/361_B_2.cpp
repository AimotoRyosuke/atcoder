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
    Point l1 = input();
    Point r1 = input();
    Point l2 = input();
    Point r2 = input();

    auto isOverlapping = [&]() -> bool {
        if (r1.x <= l2.x)
            return false;
        if (r2.x <= l1.x)
            return false;
        if (r1.y <= l2.y)
            return false;
        if (r2.y <= l1.y)
            return false;
        if (r1.z <= l2.z)
            return false;
        if (r2.z <= l1.z)
            return false;

        return true;
    };

    bool ok = isOverlapping();
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}
