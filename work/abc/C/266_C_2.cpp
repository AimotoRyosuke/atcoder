#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Pt {
    int x, y;
    Pt(int x, int y) : x(x), y(y) {};
    void input() { cin >> x >> y; }
    Pt operator-(const Pt &a) const { return Pt(x - a.x, y - a.y); }
    int cross(Pt &a) { return x * a.y - y * a.x; }
    int ccw(Pt &a) {
        int area = cross(a);
        if (area > 0)
            return 1;
        if (area < 0)
            return -1;
        return 0;
    }
};

int main() {
    vector<Pt> P(4);
    rep(i, 4) P.at(i).input();
    bool ok = true;
    rep(i, 4) {
        Pt A = P.at(i);
        Pt B = P.at((i + 1) % 4);
        Pt C = P.at((i + 2) % 4);
        Pt b = B - A, c = C - A;
        if (b.ccw(c) != 1)
            ok = false;
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
