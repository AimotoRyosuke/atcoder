#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> ans(N, 0);
    rep(i, N - K) ans.at(i) = A.at(i + K);
    rep(i, N) cout << ans.at(i) << " ";
}
