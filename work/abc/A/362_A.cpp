#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int R, G, B;
    cin >> R >> G >> B;
    string S;
    cin >> S;
    int ans = 101;
    if (S == "Red")
        ans = min(G, B);
    else if (S == "Blue")
        ans = min(R, G);
    else if (S == "Green")
        ans = min(R, B);
    cout << ans << '\n';
}
