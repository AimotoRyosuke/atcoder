#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<pair<int, ull>> pairs(N);
    for (auto &p : pairs) {
        int f, s;
        cin >> f >> s;
        p = {f, s};
    }
    ull m = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                continue;
            auto p1 = pairs.at(i), p2 = pairs.at(j);
            ull s = max(p1.second, p2.second);
            ull t = min(p1.second, p2.second);
            if (p1.first == p2.first) {
                m = max(m, s + t / 2);
            } else {
                m = max(m, s + t);
            }
        }
    }
    cout << m << endl;
}
