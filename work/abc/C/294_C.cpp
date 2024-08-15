#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> C(N + M, vector<int>(3));
    rep(i, N) {
        cin >> C.at(i).at(0);
        C.at(i).at(1) = 0;
        C.at(i).at(2) = i;
    }
    rep(i, M) {
        cin >> C.at(i + N).at(0);
        C.at(i + N).at(1) = 1;
        C.at(i + N).at(2) = i;
    }
    sort(C.begin(), C.end(),
         [](const auto &a, const auto &b) { return a[0] < b[0]; });
    vector<int> AO(N), BO(M);
    rep(i, N + M) {
        if (C.at(i).at(1))
            BO.at(C.at(i).at(2)) = i;
        else
            AO.at(C.at(i).at(2)) = i;
    }
    rep(i, N) cout << AO.at(i) + 1 << ' ';
    cout << '\n';
    rep(i, M) cout << BO.at(i) + 1 << ' ';
}
