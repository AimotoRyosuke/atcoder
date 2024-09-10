#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    rep(i, N) {
        if (i == 0) {
            S.at(i) = "1";
            continue;
        }
        S.at(i) = S.at(i - 1) + " " + to_string(i + 1) + " " + S.at(i - 1);
    }
    cout << S.at(N - 1) << '\n';
}
