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
        A.at(i).push_back(a);
        A.at(i).push_back(i);
    }
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    vector<int> scores(N);
    int Max = 0;
    rep(i, N) {
        auto &sc = scores.at(i);
        rep(j, M) {
            if (S.at(i).at(j) == 'o') {
                sc += A.at(j).at(0);
            }
        }
        sc += i;
        Max = max(Max, sc);
    };
    sort(A.begin(), A.end(),
         [](const auto &a, const auto &b) { return a[0] > b[0]; });
    rep(i, N) {
        auto &sc = scores[i];
        int cnt = 0;
        if (sc >= Max) {
            cout << cnt << '\n';
            continue;
        }
        rep(j, M) {
            if (S.at(i).at(A.at(j).at(1)) == 'o')
                continue;
            cnt++;
            sc += A.at(j).at(0);
            if (sc >= Max) {
                cout << cnt << '\n';
                break;
            }
        }
    }
}
