#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N), odds, evens;
    for (auto &a : A) {
        cin >> a;
        if (a % 2) {
            odds.push_back(a);
        } else {
            evens.push_back(a);
        }
    }
    sort(odds.rbegin(), odds.rend());
    sort(evens.rbegin(), evens.rend());
    int ans = -1;
    if (odds.size() >= 2)
        ans = max(ans, odds.at(0) + odds.at(1));
    if (evens.size() >= 2)
        ans = max(ans, evens.at(0) + evens.at(1));
    cout << ans << '\n';
}
