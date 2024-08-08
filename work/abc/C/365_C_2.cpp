#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = long long;

int main() {
    ull N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    ull sum = accumulate(A.begin(), A.end(), 0LL);
    if (M >= sum) {
        cout << "infinite" << '\n';
        return 0;
    }

    auto sum_check = [&](int m) -> bool {
        ull sum = 0;
        rep(i, N) sum += min(m, A.at(i));
        return sum <= M;
    };

    int ac = 0, wa = 1001001001;
    while (ac + 1 < wa) {
        int m = (ac + wa) / 2;
        if (sum_check(m))
            ac = m;
        else
            wa = m;
    }
    cout << ac << '\n';
}
