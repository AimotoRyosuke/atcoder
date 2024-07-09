#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(M);
    rep(i, M) {
        int a;
        cin >> a;
        A[i] = {i, a};
    }
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    vector<int> scr(N);
    rep(i, N) {
        rep(j, M) {
            if (S[i][j] == 'o') {
                scr[i] += A[j][1];
            }
        }
        scr[i] += i + 1;
    }
    sort(A.begin(), A.end(),
         [](const auto &a, const auto &b) { return a[1] > b[1]; });
    int mx = *max_element(scr.begin(), scr.end());
    rep(i, N) {
        int sc = scr[i];
        if (sc == mx) {
            cout << 0 << '\n';
            continue;
        }
        int cnt = 0;
        rep(j, M) {
            int idx = A[j][0];
            if (S[i][idx] == 'o')
                continue;
            sc += A[j][1];
            cnt++;
            if (sc > mx) {
                cout << cnt << '\n';
                break;
            }
        }
    }
    return 0;
}
