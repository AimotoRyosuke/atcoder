#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = n - 2; i >= 0; i--) {
        int diff = a.at(i) - (int)a.at(i + 1);
        if (diff > 1) {
            for (int j = 0; j < diff - 1; j++) {
                auto it = a.begin() + i + j + 1;
                a.insert(it, a.at(i) - j - 1);
            }
        } else if (diff < -1) {
            for (int j = 0; j < -(diff + 1); j++) {
                auto it = a.begin() + i + j + 1;
                a.insert(it, a.at(i) + j + 1);
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a.at(i) << " ";
    }
    cout << endl;
}
