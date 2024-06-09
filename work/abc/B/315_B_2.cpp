#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    cin >> M;
    vector<int> D(M);
    int total = 0;
    for (auto &d : D) {
        cin >> d;
        total += d;
    }
    int rmn = (total + 1) / 2;
    int month = 0;
    int day;
    for (auto &d : D) {
        month++;
        if (rmn > d)
            rmn -= d;
        else {
            day = rmn;
            break;
        }
    }
    cout << month << " " << day << endl;
}
