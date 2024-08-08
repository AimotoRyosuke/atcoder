#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> AB(N, vector<int>(3));
    rep(i, N) {
        cin >> AB.at(i).at(0) >> AB.at(i).at(1);
        AB.at(i).at(2) = i;
    }
    stable_sort(AB.begin(), AB.end(), [](const auto &s, const auto &t) {
        return s.at(0) * ull(t.at(0) + t.at(1)) >
               t.at(0) * ull(s.at(0) + s.at(1));
    });
    rep(i, N) { cout << AB.at(i).at(2) + 1 << ' '; }
}
