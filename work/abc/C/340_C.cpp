// 与えられた1つの値に対して処理を行う場合は漸化式を使う
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

map<ull, ull> m;
ull f(ull N) {
    if (N == 1)
        return 0;
    if (m.count(N))
        return m[N];
    return m[N] = f(N / 2) + f((N + 1) / 2) + N;
}

int main() {
    ull N;
    cin >> N;
    cout << f(N) << endl;
}
