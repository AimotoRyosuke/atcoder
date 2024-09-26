#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int N, ans;
ll X;
vector<vector<int>> A;

void dfs(int i, ll s) {
    if (i == N) {
        if (s == X)
            ans++;
        return;
    }
    rep(j, A[i].size()) {
        if (s > X / A[i][j])
            continue;
        dfs(i + 1, s * A[i][j]);
    }
}

int main() {
    cin >> N >> X;
    A = vector<vector<int>>(N);
    rep(i, N) {
        int l;
        cin >> l;
        rep(j, l) {
            int a;
            cin >> a;
            A.at(i).push_back(a);
        }
    }
    dfs(0, 1);
    cout << ans << '\n';
}
