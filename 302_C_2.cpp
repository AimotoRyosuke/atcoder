#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int getDiff(string s1, string s2) {
    int diff = 0;
    rep(i, (int)s1.size()) if (s1.at(i) != s2.at(i)) diff++;
    return diff;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    vector<int> order(N);
    iota(order.begin(), order.end(), 0);
    bool ans = false;
    do {
        bool ok = true;
        rep(i, N - 1) {
            if (getDiff(S.at(order[i]), S.at(order[i + 1])) > 1) {
                ok = false;
                break;
            }
        }
        if (ok)
            ans = ok;
    } while (next_permutation(order.begin(), order.end()));
    cout << (ans ? "Yes" : "No") << '\n';
}
