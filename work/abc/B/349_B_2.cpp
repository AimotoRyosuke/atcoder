#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    map<char, int> c_map;
    for (int i = 0; i < (int)S.size(); i++) {
        char c = S.at(i);
        if (c_map.count(c) == 0) {
            c_map[c] = 1;
        } else {
            c_map[c]++;
        }
    }
    map<int, int> t_map;
    for (const auto &[key, value] : c_map) {
        if (t_map.count(value) == 0) {
            t_map[value] = 1;
        } else {
            t_map[value]++;
        }
    }
    for (const auto &[key, value] : t_map) {
        if (value != 0 && value != 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
