#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<int> H(3);
    rep(i, 3) cin >> H.at(i);
    vector<int> W(3);
    rep(i, 3) cin >> W.at(i);
    int cnt = 0;
    for (int i = 1; i <= 30; i++) {
        for (int j = 1; j <= 30; j++) {
            for (int k = 1; k <= 30; k++) {
                for (int l = 1; l <= 30; l++) {
                    int c13 = H[0] - i - j;
                    int c23 = H[1] - k - l;
                    int c31 = W[0] - i - k;
                    int c32 = W[1] - j - l;
                    if (c13 < 1 || c23 < 1 || c31 < 1 || c32 < 1) {
                        continue;
                    }
                    int c33_1 = W[2] - c13 - c23;
                    int c33_2 = H[2] - c31 - c32;
                    if (c33_1 == c33_2 && c33_1 > 0) {
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << '\n';
}
