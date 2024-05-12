#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll X;
    cin >> X;
    cout << (X % 10 == 0 || X < 0 ? X / 10 : X / 10 + 1) << endl;
}
