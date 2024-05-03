#include <bits/stdc++.h>
using namespace std;
const int a = 0, b = 3, c = 4, d = 8, e = 9, f = 14, g = 23;
int get_num(char x) {
    if (x == 'A')
        return a;
    else if (x == 'B')
        return b;
    else if (x == 'C')
        return c;
    else if (x == 'D')
        return d;
    else if (x == 'E')
        return e;
    else if (x == 'F')
        return f;
    else if (x == 'G')
        return g;
    return 0;
};
int main() {
    char p, q;
    cin >> p >> q;
    cout << abs(get_num(q) - get_num(p)) << endl;
}
