#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int MAX = 1e9;

int main() {
    int N;
    cin >> N;
    vector<pair<ull, ull>> AB(N);
    for (auto &ab : AB)
        cin >> ab.first >> ab.second;
    vector<int> order(N);
    iota(order.begin(), order.end(), 0);

    stable_sort(order.begin(), order.end(),
                [&](const auto &a, const auto &b) -> bool {
                    auto A = AB.at(a), B = AB.at(b);
                    return (B.first + B.second) * A.first >
                           (A.first + A.second) * B.first;
                });

    rep(i, N) cout << order[i] + 1 << ' ';
}
