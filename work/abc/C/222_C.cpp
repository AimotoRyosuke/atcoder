#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool win(char a, char b) {
    if (a == 'G' && b == 'C')
        return true;
    if (a == 'C' && b == 'P')
        return true;
    if (a == 'P' && b == 'G')
        return true;
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;
    int n2 = N * 2;
    vector<string> A(n2);
    rep(i, n2) cin >> A.at(i);
    vector<pair<int, int>> d(n2);
    rep(i, n2) d[i] = {0, i};
    rep(mi, M) rep(ni, N) {
        int i = ni * 2;
        int j = ni * 2 + 1;
        int ai = d[i].second, aj = d[j].second;
        if (win(A[ai][mi], A[aj][mi])) {
            d[i].first--;
        }
        if (win(A[aj][mi], A[ai][mi])) {
            d[j].first--;
        }
        sort(d.begin(), d.end());
    }
    rep(i, n2) { cout << d.at(i).second + 1 << '\n'; }
}
