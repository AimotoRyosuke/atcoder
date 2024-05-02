#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);
    sort(a.rbegin(), a.rend());
    for (int i = 1; i < n; i++) {
        if (a.at(0) != a.at(i)) {
            cout << a.at(i) << endl;
            return 0;
        }
    }
}
