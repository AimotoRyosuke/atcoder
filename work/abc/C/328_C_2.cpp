#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<pair<int, int>> pairs(Q);
    for (auto &q : pairs)
        cin >> q.first >> q.second;

    vector<int> A(N);
    rep(i, N) {
        if (i == 0)
            continue;
        A.at(i) = A.at(i - 1);
        if (S.at(i) == S.at(i - 1))
            A.at(i)++;
    }
    rep(i, Q) {
        cout << A.at(pairs[i].second - 1) - A.at(pairs[i].first - 1) << endl;
    }
}
