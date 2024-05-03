#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> p;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        p.insert(b);
    }
    if (p.size() != n - 1) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (p.count(i + 1) == 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
