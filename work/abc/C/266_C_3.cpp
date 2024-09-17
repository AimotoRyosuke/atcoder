#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct V {
    int x, y;
    V(int x = 0, int y = 0) : x(x), y(y) {};
    void input() { cin >> x >> y; }
    V operator-(const V &a) const { return V(x - a.x, y - a.y); }
    int cross(V &a) { return x * a.y - y * a.x; }
    int ccw(V &a) {
        int area = cross(a);
        if (area > 0)
            return 1;
        if (area < 0)
            return -1;
        return 0;
    }
};

int main() {
    vector<V> P(4);
    rep(i, 4) P.at(i).input();
    bool ok = true;
    rep(i, 4) {
        V A = P.at(i);
        V B = P.at((i + 1) % 4);
        V C = P.at((i + 2) % 4);
        V b = B - A, c = C - A;
        if (b.ccw(c) != 1)
            ok = false;
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
