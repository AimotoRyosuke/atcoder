#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<vector<char>> A(9, vector<char>(9));
    for (auto &row : A)
        for (auto &cell : row)
            cin >> cell;
    rep(y, 9) {
        string s;
        rep(x, 9) { s += A.at(y).at(x); }
        sort(s.begin(), s.end());
        if (s != "123456789") {
            cout << "No" << endl;
            return 0;
        }
    }
    rep(x, 9) {
        string s;
        rep(y, 9) { s += A.at(y).at(x); }
        sort(s.begin(), s.end());
        if (s != "123456789") {
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i, 9) {
        string s;
        int dx = i % 3;
        int dy = i / 3;
        rep(y, 3) rep(x, 3) { s += A.at(y + dy * 3).at(x + dx * 3); }
        sort(s.begin(), s.end());
        if (s != "123456789") {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
