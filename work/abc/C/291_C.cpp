#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    map<pair<int, int>, bool> M;
    pair<int, int> cur = {0, 0};
    M[cur] = true;
    bool ok = false;
    rep(i, N) {
        char c = s.at(i);
        if (c == 'R')
            cur.first++;
        if (c == 'L')
            cur.first--;
        if (c == 'U')
            cur.second++;
        if (c == 'D')
            cur.second--;
        if (M[cur])
            ok = true;
        else
            M[cur] = true;
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
