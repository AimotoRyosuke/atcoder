#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int R, C;
    cin >> R >> C;
    R--, C--;
    vector<vector<int>> A(2, vector<int>(2));
    rep(i, 2) {
        rep(j, 2) { cin >> A.at(i).at(j); }
    }
    cout << A.at(R).at(C) << '\n';
}
