#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int M;
    cin >> M;
    string S1, S2, S3;
    cin >> S1 >> S2 >> S3;
    int ans = -1;
    rep(i, M * 3) rep(j, M * 3) rep(k, M * 3) {
        if (i == j || j == k || k == i) {
            continue;
        }
        if (S1[i % M] == S2[j % M] && S2[j % M] == S3[k % M]) {
            if (ans == -1)
                ans = max(i, max(j, k));
            else
                ans = min(ans, max(i, max(j, k)));
        }
    }
    cout << ans << '\n';
}
