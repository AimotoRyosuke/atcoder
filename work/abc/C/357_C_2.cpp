#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    int L = pow(3, N);
    vector<vector<char>> G(L, vector<char>(L, '#'));
    rep(i, L) {
        rep(j, L) {
            int n = N;
            while (n != 0) {
                int s = pow(3, n);
                if (i % s >= s / 3 && i % s < s / 3 * 2 && j % s >= s / 3 &&
                    j % s < s / 3 * 2)
                    G.at(i).at(j) = '.';
                n--;
            }
            cout << G.at(i).at(j);
        }
        cout << '\n';
    }
}
