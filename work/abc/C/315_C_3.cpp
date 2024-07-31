#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N);
    rep(i, N) {
        int f, s;
        cin >> f >> s;
        f--;
        A[f].push_back(s);
    }
    int x = 0, y = 0;
    rep(i, N) {
        if (A[i].size() < 2)
            continue;
        sort(A[i].rbegin(), A[i].rend());
        x = max(x, A[i][0] + A[i][1] / 2);
    }
    vector<int> B;
    rep(i, N) {
        if (A.at(i).empty())
            continue;
        B.push_back(A.at(i).at(0));
    }
    sort(B.rbegin(), B.rend());
    if (B.size() >= 2)
        y = B[0] + B[1];
    int ans = max(x, y);
    cout << ans << '\n';
}
