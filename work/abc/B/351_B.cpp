#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    vector<string> b(n);
    int diffY = 0;
    for (int i = 0; i < n; i++) {
        cin >> b.at(i);
        if (a.at(i) != b.at(i)) {
            diffY = i;
        }
    }

    for (int i = 0; i < a.size(); i++) {
        if (a.at(diffY).at(i) != b.at(diffY).at(i)) {
            cout << diffY + 1 << " " << i + 1 << endl;
            return 0;
        }
    }
}
