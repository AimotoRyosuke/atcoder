#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<int> C(9);
    for (auto &c : C)
        cin >> c;
    vector<int> order(9);
    iota(order.begin(), order.end(), 0);
    int all = 0, num = 0;
    do {
        all++;
        bool ok = true;
        auto f = [&](int i, int j, int k) {
            vector<pair<int, int>> D;
            D.emplace_back(order.at(i), C.at(i));
            D.emplace_back(order.at(j), C.at(j));
            D.emplace_back(order.at(k), C.at(k));
            sort(D.begin(), D.end());
            if (D[0].second == D[1].second)
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
            num++;
    } while (next_permutation(order.begin(), order.end()));
    cout << num << " " << all << '\n';
    printf("%.12f\n", (double)num / all);
}
