#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    map<int, ll> MX, MY;
    MX[N] = 1;
    int n = N;
    while (n != 1) {
        MX[n - 1] += MX[n];
        MY[n] += MX[n] * X;
        MX[n - 1] += MY[n];
        MY[n - 1] += MY[n] * Y;
        n--;
    }
    cout << MY[1] << '\n';
}
