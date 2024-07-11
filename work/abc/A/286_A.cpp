#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    int diff = R - P;
    rep(i, N) {
        if (i + 1 >= P && i + 1 <= Q) {
            cout << A.at(i + diff) << " ";
        } else if (i + 1 >= R && i + 1 <= S)
            cout << A.at(i - diff) << " ";
        else
            cout << A.at(i) << " ";
    }
}
