#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int Y;
    cin >> Y;
    int day;
    if (Y % 4)
        day = 365;
    else if (Y % 400 == 0)
        day = 366;
    else if (Y % 100 == 0 && Y % 400)
        day = 365;
    else if (Y % 4 == 0 && Y % 100)
        day = 366;
    cout << day << '\n';
}
