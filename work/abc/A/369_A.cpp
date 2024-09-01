#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int A, B;
    cin >> A >> B;
    int ans = 0;
    if (A == B)
        ans = 1;
    else if ((A - B) % 2)
        ans = 2;
    else
        ans = 3;
    cout << ans << '\n';
}
