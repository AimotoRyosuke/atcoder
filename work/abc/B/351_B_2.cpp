#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> grid_a(n);
    for (int i = 0; i < n; i++)
        cin >> grid_a.at(i);
    string wrong_b;
    int wrong_index;
    for (int i = 0; i < n; i++) {
        string b;
        cin >> b;
        if (grid_a.at(i) != b) {
            wrong_b = b;
            wrong_index = i;
        }
    }
    for (int i = 0; i < (int)grid_a.at(wrong_index).size(); i++) {
        if (grid_a.at(wrong_index).at(i) != wrong_b.at(i)) {
            cout << wrong_index + 1 << " " << i + 1 << endl;
        }
    }
}
