#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    int n1 = 0, n2 = 0, n3 = 0;
    if (c1 == '<')
        n2++;
    else
        n1++;
    if (c2 == '<')
        n3++;
    else
        n1++;
    if (c3 == '<')
        n3++;
    else
        n2++;
    char ans;
    if (n1 == 1)
        ans = 'A';
    else if (n2 == 1)
        ans = 'B';
    else
        ans = 'C';
    cout << ans << '\n';
}
