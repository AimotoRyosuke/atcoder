#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }
    int before = 0;
    int current = s.at(1).at(0);
    for (int i = 0; i < n; i++) {
        before = current;
        current = s.at(0).at(i);
        s.at(0).at(i) = before;
    }
    for (int i = 1; i < n; i++) {
        before = current;
        current = s.at(i).at(n - 1);
        s.at(i).at(n - 1) = before;
    }
    for (int i = n - 2; i >= 0; i--) {
        before = current;
        current = s.at(n - 1).at(i);
        s.at(n - 1).at(i) = before;
    }
    for (int i = n - 2; i > 0; i--) {
        before = current;
        current = s.at(i).at(0);
        s.at(i).at(0) = before;
    }
    for (int i = 0; i < n; i++) {
        cout << s.at(i) << endl;
    }
}
