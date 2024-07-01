#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    ull N;
    cin >> N;
    ull pay = 0;
    map<ull, ull> cache;
    auto select = [&](auto select, ull value) -> ull {
        if (value <= 1)
            return 0;
        if (cache[value])
            return cache[value];
        return cache[value] = value + select(select, value / 2) +
                              select(select, (value + 1) / 2);
    };
    cout << select(select, N) << endl;
}
