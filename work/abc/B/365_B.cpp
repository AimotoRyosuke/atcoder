#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    auto B = A;
    sort(B.rbegin(), B.rend());
    int second = B.at(1);
    rep(i, N) {
        if (A.at(i) == second) {
            cout << i + 1 << '\n';
            return 0;
        }
    }
}
