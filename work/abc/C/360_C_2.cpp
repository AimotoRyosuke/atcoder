#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> W(N);
    for (auto &w : W)
        cin >> w;
    vector<vector<int>> boxes(N);
    rep(i, N) { boxes.at(A.at(i) - 1).push_back(W.at(i)); }
    ll ans = 0;
    for (auto &box : boxes) {
        if (box.empty())
            continue;
        sort(box.begin(), box.end());
        rep(i, box.size() - 1) { ans += (ll)box.at(i); }
    }
    cout << ans << '\n';
}
