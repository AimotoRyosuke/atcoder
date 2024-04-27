// URL: https://atcoder.jp/contests/abs/tasks/abc081_b
// while文

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    int count = 0;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (a.at(i) % 2 == 0) {
                a.at(i) /= 2;
            } else {
                cout << count << endl;
                return 0;
            }
        }
        count++;
    }
    return 0;
}
