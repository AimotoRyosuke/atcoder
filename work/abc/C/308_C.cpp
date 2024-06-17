#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> AB(N);
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        AB.at(i) = {a, a + b};
    }
    vector<int> P(N);
    iota(P.begin(), P.end(), 0);
    auto f = [&](int i, int j) -> bool {
        auto [ia, iab] = AB.at(i);
        auto [ja, jab] = AB.at(j);
        return (ull)ia * jab > (ull)ja * iab;
    };
    stable_sort(P.begin(), P.end(), f);
    for (int i = 0; i < N; i++) {
        cout << P.at(i) + 1 << " ";
    }
    cout << endl;
}
