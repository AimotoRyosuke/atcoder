#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define rep(i, n) for (ull i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    map<int, int> A;
    rep(i, N) {
        int a;
        cin >> a;
        A[a]++;
    }
    ull ans = (ull)K * (K + 1) / 2;
    for (auto &[key, value] : A) {
        if (key <= K)
            ans -= key;
    }
    cout << ans << endl;
}
