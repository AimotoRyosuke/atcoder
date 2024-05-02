#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;
    vector<int> d(m);
    int total_day = 0;
    for (int i = 0; i < m; i++) {
        cin >> d.at(i);
        total_day += d.at(i);
    }
    int target_day = (total_day + 1) / 2;
    for (int i = 0; i < m; i++) {
        if (target_day <= d.at(i)) {
            cout << i + 1 << " " << target_day << endl;
            return 0;
        }
        target_day -= d.at(i);
    }
}
