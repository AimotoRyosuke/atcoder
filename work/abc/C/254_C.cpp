#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, k;
    cin >> N >> k;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    rep(r, k) {
        vector<int> b;
        for (int i = r; i < N; i += k) {
            b.push_back(A[i]);
        }
        sort(b.begin(), b.end());
        for (int i = r; i < N; i += k) {
            A.at(i) = b[i / k];
        }
    }
    auto tmp = A;
    sort(tmp.begin(), tmp.end());
    bool ok = A == tmp;
    cout << (ok ? "Yes" : "No") << '\n';
}
