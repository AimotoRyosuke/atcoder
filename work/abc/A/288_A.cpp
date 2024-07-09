#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A.at(i) >> B.at(i);
    rep(i, N) cout << A.at(i) + B.at(i) << '\n';
}
