#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, D;
    cin >> N >> D;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    int ans = 0, cnt = 0;
    for (int i = 0; i < D; i++) {
        bool ok = true;

        for (int j = 0; j < N; j++) {
            char c = S.at(j).at(i);
            if (c == 'x') {
                ok = false;
                break;
            }
        }

        if (!ok && i == D - 1) {
            ans = max(ans, cnt);
            cnt = 0;
        } else
            cnt++;
    }
    cout << ans << endl;
}
