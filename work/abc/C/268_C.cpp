#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (auto &p : P)
        cin >> p;
    vector<int> diff(N);
    vector<int> cnt(N);
    rep(i, N) {
        auto p = P.at(i);
        if (p == i) {
            diff.at(p) = 0;
        } else if (p > i) {
            diff.at(p) = p - i;
        } else {
            diff.at(p) = P.size() - i + p;
        }
        cnt[diff.at(p)]++;
        cnt[(diff.at(p) - 1 + N) % N]++;
        cnt[(diff.at(p) + 1) % N]++;
    }
    int mx = 0;
    rep(i, N) mx = max(mx, cnt.at(i));
    cout << mx << '\n';
}
