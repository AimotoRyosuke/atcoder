#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<tuple<int, int, int>> row = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6},
        {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6},
    };
    vector<int> C(9);
    for (auto &c : C)
        cin >> c;
    vector<int> order;
    for (int i = 0; i < 9; i++)
        order.push_back(i);
    int cnt = 0, all = 0;
    do {
        all++;
        bool ok = true;
        for (auto [x, y, z] : row) {
            vector<pair<int, int>> d;
            d.emplace_back(order.at(x), C.at(x));
            d.emplace_back(order.at(y), C.at(y));
            d.emplace_back(order.at(z), C.at(z));
            sort(d.begin(), d.end());
            if (d.at(0).second == d.at(1).second)
                ok = false;
        }
        if (ok)
            cnt++;
    } while (next_permutation(order.begin(), order.end()));
    cout << setprecision(10) << (double)cnt / all << endl;
}
