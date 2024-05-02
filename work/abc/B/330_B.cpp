#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> results(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int x = 0;
        if (a <= l) {
            x = l;
        } else if (a >= r) {
            x = r;
        } else {
            x = a;
        }
        results.at(i) = x;
    }
    for (int i = 0; i < (int)results.size(); i++) {
        cout << results.at(i) << ' ';
    }
    cout << endl;
}
