#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);
    rep(i, N - 1) {
        int r = A.at(N - 1 - i);
        int l_i = N - 1 - i - 1;
        int l = A.at(N - 1 - i - 1);
        rep(j, abs(r - l) - 1) {
            auto it = A.begin() + l_i + 1;
            int add = (r > l) ? r - l - 1 - j : -l + r + 1 + j;
            A.insert(it, l + add);
        }
    }
    rep(i, A.size()) cout << A.at(i) << " ";
}
