#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> ap(n);
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a.at(i).at(j);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0) {
                ap.at(a.at(i).at(j) - 1).insert(a.at(i).at(j - 1));
            }
            if (j != n - 1) {
                ap.at(a.at(i).at(j) - 1).insert(a.at(i).at(j + 1));
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += ap.at(i).size();
    }
    cout << (n * (n - 1) - count) / 2 << endl;
}
