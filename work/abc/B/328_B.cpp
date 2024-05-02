#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d(n, 0);
    vector<int> target_months;
    for (int i = 0; i < n; i++) {
        cin >> d.at(i);
        int month = i + 1;
        if (month < 10 || month % 11 == 0) {
            target_months.push_back(month);
        }
    }

    int count = 0;
    for (int i = 0; i < (int)target_months.size(); i++) {
        int month = target_months.at(i);
        int day = d.at(month - 1);
        int num = month % 10;
        if (num > day) {
            continue;
        }
        ++count;
        if (num * 11 > day) {
            continue;
        }
        ++count;
    }
    cout << count << endl;
}
