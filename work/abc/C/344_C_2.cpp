#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    int M;
    cin >> M;
    vector<int> B(M);
    for (auto &b : B)
        cin >> b;
    int L;
    cin >> L;
    vector<int> C(L);
    for (auto &c : C)
        cin >> c;
    int Q;
    cin >> Q;
    vector<int> X(Q);
    for (auto &x : X)
        cin >> x;
    map<int, int> cache;
    rep(i, N) rep(j, M) rep(k, L) { cache[A.at(i) + B.at(j) + C.at(k)]++; }
    rep(i, Q) cout << (cache.count(X.at(i)) ? "Yes" : "No") << endl;
}
