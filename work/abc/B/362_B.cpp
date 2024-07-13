#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Point {
    int x, y;
};
Point input() {
    Point p;
    cin >> p.x >> p.y;
    return p;
}

int distanceSquared(Point p1, Point p2) {
    return pow(abs(p1.x - p2.x), 2) + pow(abs(p1.y - p2.y), 2);
}

int main() {
    auto a = input();
    auto b = input();
    auto c = input();
    int len1 = distanceSquared(a, b);
    int len2 = distanceSquared(a, c);
    int len3 = distanceSquared(b, c);
    bool ok = len1 + len2 == len3 || len2 * len3 == len1 || len1 + len3 == len2;
    cout << (ok ? "Yes" : "No") << '\n';
}
