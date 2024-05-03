#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }
    int max_days = 0;
    int days = 0;
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < n; j++) {
            if (s.at(j).at(i) != 'o') {
                max_days = max(max_days, days);
                days = -1;
                break;
            }
        }
        ++days;
    }
    max_days = max(max_days, days);
    cout << max_days << endl;
}
