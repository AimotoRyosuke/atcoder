#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

map<ull, ull> cache;
ull calculate(ull n) {
    if (n <= 1)
        return 0;
    if (cache[n])
        return cache[n];
    return cache[n] = n + calculate(n / 2) + calculate((n + 1) / 2);
};

int main() {
    ull N;
    cin >> N;
    cout << calculate(N) << '\n';
}
