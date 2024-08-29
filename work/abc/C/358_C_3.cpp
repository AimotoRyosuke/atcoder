#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> S;
    rep(i, N) {
        string s;
        cin >> s;
        int x = 0;
        rep(j, M) {
            if (s.at(j) == 'o')
                x |= 1 << j;
        }
        S.push_back(x);
    }
    int mn = 10;
    sort(S.begin(), S.end());
    int tgt = (1 << M) - 1;
    do {
        int x = 0;
        rep(i, N) {
            x |= S.at(i);
            if (x == tgt) {
                mn = min(mn, i + 1);
                break;
            }
        }
    } while (next_permutation(S.begin(), S.end()));
    cout << mn << '\n';
}
