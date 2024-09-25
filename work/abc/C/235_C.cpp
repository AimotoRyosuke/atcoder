#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    unordered_map<int, vector<int>> A(N);
    rep(i, N) {
        int a;
        cin >> a;
        A[a].push_back(i + 1);
    }
    rep(i, Q) {
        int x, k;
        cin >> x >> k;
        k--;
        if (A[x].size() >= k + 1)
            cout << A[x][k] << '\n';
        else
            cout << -1 << '\n';
    }
}
