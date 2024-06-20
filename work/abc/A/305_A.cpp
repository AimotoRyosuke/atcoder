#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans, d1 = N % 10;
    if (d1 < 3 || (d1 >= 5 && d1 < 8))
        ans = N - d1 % 5;
    else
        ans = N - d1 % 5 + 5;
    cout << ans << endl;
}
