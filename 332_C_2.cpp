
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;

    int ans = 0, m = 0, r = M;
    rep(i, N) {
        char c = S.at(i);
        if (c == '0') {
            ans = min(ans, m);
            r = M;
            m = 0;
        } else if (c == '1') {
            if (r > 0)
                r--;
            else
                m--;
        } else if (c == '2')
            m--;
        if (i == N - 1)
            ans = min(ans, m);
    }
    cout << abs(ans) << endl;
}
