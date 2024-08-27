#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    unordered_map<string, int> M;
    rep(i, N) {
        cout << S.at(i);
        if (++M[S.at(i)] == 1) {
            cout << '\n';
        } else {
            printf("(%i)\n", M[S.at(i)] - 1);
        }
    }
}
