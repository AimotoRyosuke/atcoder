#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    ull sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    bool s_is_left = sx % 2 == sy % 2;
    bool t_is_left = tx % 2 == ty % 2;
    if (sx < tx && s_is_left)
        sx++;
    if (sx < tx && !t_is_left)
        tx--;
    if (sx > tx && !s_is_left)
        sx--;
    if (sx > tx && t_is_left)
        tx++;
    ull diff_x = sx > tx ? sx - tx : tx - sx;
    ull diff_y = sy > ty ? sy - ty : ty - sy;
    ull diff_xy = diff_y > diff_x ? diff_x : diff_y;
    ull ans = 0;
    if (diff_y > diff_x) {
        ans = diff_x + diff_y - diff_xy;
    } else {
        ans = (diff_x + 1 - diff_y) / 2 + diff_y;
    }
    cout << ans << endl;
}
