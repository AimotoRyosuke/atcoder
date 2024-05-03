#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c.at(i);
    }
    vector<string> d(m);
    for (int i = 0; i < m; i++) {
        cin >> d.at(i);
    }
    vector<int> p(m + 1);
    for (int i = 0; i < m + 1; i++) {
        cin >> p.at(i);
    }
    int price = 0;
    for (int i = 0; i < n; i++) {
        int p_index = 0;
        for (int j = 0; j < m; j++) {
            if (c.at(i) == d.at(j)) {
                p_index = j + 1;
            }
        }
        price += p.at(p_index);
    }
    cout << price << endl;
}
