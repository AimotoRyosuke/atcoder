#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N - 1);
    int M = 0, m = 100;
    int total = 0;
    for (auto &a : A) {
        cin >> a;
        M = max(M, a);
        m = min(m, a);
        total += a;
    }
    total -= M + m;
    int ans;
    if (total + m >= X)
        ans = 0;
    else if (total + M < X)
        ans = -1;
    else
        ans = X - total;
    cout << ans << endl;
}
