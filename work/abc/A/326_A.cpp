#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int diff = Y - X;
    if (diff <= 2 && diff >= -3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
