#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, N) rep(j, 3) {
        int a;
        cin >> a;
        A.at(i) += a;
    }
    auto B = A;
    sort(B.rbegin(), B.rend());
    int base = B.at(K - 1);
    rep(i, N) { cout << (A.at(i) + 300 >= base ? "Yes" : "No") << "\n"; }
}
