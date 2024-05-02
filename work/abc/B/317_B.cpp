#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    int first_num = a.at(0);
    for (int i = 1; i < a.at(a.size() - 1); i++) {
        if (first_num + i != a.at(i)) {
            cout << a.at(i) - 1 << endl;
            return 0;
        }
    }
}
