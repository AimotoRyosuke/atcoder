#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> B(N - 1);
    for (auto &b : B)
        cin >> b;
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    int skip = 0, si = 0;
    bool ok = true;
    rep(i, N) {
        if ((skip == 1 || i != N - 1) && A.at(i) <= B.at(i - skip))
            continue;
        else if (skip == 0) {
            skip = 1;
            si = i;
        } else {
            ok = false;
            break;
        }
    }
    cout << (ok ? A.at(si) : -1) << '\n';
}
