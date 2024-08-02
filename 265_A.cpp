#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int X, Y, N;
    cin >> X >> Y >> N;
    if (X * 3 >= Y)
        cout << (N / 3) * Y + (N % 3) * X << '\n';
    else
        cout << N * X << '\n';
}
