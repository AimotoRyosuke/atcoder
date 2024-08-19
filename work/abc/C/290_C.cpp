#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    map<int, int> M;
    rep(i, N) {
        if (A.at(i) >= K)
            continue;
        M[A.at(i)] = 1;
    }
    int ans = 0;
    rep(i, K) {
        if (M[i])
            ans++;
        else
            break;
    }
    cout << ans << '\n';
}
