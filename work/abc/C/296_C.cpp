#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    map<int, bool> M;
    for (auto &a : A) {
        cin >> a;
        M[a] = true;
    }
    bool ok = false;
    for (auto &[key, value] : M) {
        if (M.count(key + X)) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
