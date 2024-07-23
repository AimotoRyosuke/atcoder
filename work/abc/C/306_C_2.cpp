#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N * 3);
    for (auto &a : A) {
        cin >> a;
        a--;
    }
    vector<vector<int>> B(N);
    rep(i, N * 3) {
        if (B[A.at(i)].empty()) {
            B[A.at(i)].push_back(A.at(i));
        }
        B[A.at(i)].push_back(i);
    }
    sort(B.begin(), B.end(),
         [](const auto &a, const auto &b) { return a[2] < b[2]; });
    rep(i, N) cout << B.at(i).at(0) + 1 << ' ';
}
