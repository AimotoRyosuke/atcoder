#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<int> C(9);
    for (auto &c : C)
        cin >> c;
    vector<int> order(9);
    iota(order.begin(), order.end(), 0);
    int tot = 0, suc = 0;
    do {
        tot++;
        bool ok = true;
        auto f = [&](int a, int b, int c) {
            vector<pair<int, int>> d;
            d.emplace_back(order.at(a), C.at(a));
            d.emplace_back(order.at(b), C.at(b));
            d.emplace_back(order.at(c), C.at(c));
            sort(d.begin(), d.end());
            if (d[0].second == d[1].second)
                ok = false;
        };
        f(0, 1, 2);
        f(3, 4, 5);
        f(6, 7, 8);
        f(0, 3, 6);
        f(1, 4, 7);
        f(2, 5, 8);
        f(0, 4, 8);
        f(2, 4, 6);
        if (ok)
            suc++;

    } while (next_permutation(order.begin(), order.end()));
    double ans = 1. * suc / tot;
    printf("%.12f\n", ans);
}
