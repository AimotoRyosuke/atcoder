#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int Y;
    cin >> Y;

    cout << Y + ((6 - Y % 4) % 4) << '\n';
}
