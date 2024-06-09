#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (auto &a : A)
        cin >> a;
    vector<int> intake_list(M);
    for (int i = 0; i < N; i++) {
        vector<int> X(M);
        for (int j = 0; j < M; j++) {
            cin >> X.at(j);
            intake_list.at(j) += X.at(j);
        }
    }
    bool ok = true;
    for (int i = 0; i < M; i++) {
        int intake = intake_list.at(i);
        if (intake < A.at(i)) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}
