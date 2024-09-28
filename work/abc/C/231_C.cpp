#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    sort(A.begin(), A.end());
    vector<int> ans(Q);
    rep(i, Q) {
        int x;
        cin >> x;
        int ok = -1, ng = N;
        while (ok + 1 < ng) {
            int m = (ng + ok) / 2;
            if (x <= A.at(m))
                ng = m;
            else
                ok = m;
        }
        ans.at(i) = A.size() - ng;
    }
    rep(i, Q) cout << ans[i] << '\n';
}
