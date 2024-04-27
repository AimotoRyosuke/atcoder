#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    sort(a.rbegin(), a.rend());
    int a_count = 0;
    int b_count = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a_count += a.at(i);
        } else {
            b_count += a.at(i);
        }
    }
    cout << a_count - b_count << endl;
}
