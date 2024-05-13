#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, L, Q;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    cin >> M;
    vector<int> B(M);
    for (auto &b : B)
        cin >> b;
    cin >> L;
    vector<int> C(L);
    for (auto &c : C)
        cin >> c;
    cin >> Q;
    vector<int> X(Q);
    for (auto &x : X)
        cin >> x;
    set<int> sum_list;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < L; k++) {
                sum_list.insert(A.at(i) + B.at(j) + C.at(k));
            }
        }
    }
    for (int i = 0; i < Q; i++) {
        if (sum_list.count(X.at(i))) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
