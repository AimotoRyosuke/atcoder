#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> grid(9, vector<int>(9));
    for (auto &rows : grid) {
        for (auto &i : rows) {
            cin >> i;
        }
    }
    vector<set<int>> columns(9);
    vector<set<int>> rows(9);
    vector<set<int>> squares(9);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int num = grid.at(i).at(j);
            columns.at(i).insert(num);
            rows.at(j).insert(num);
            int square_i = (i / 3) * 3 + j / 3;
            squares.at(square_i).insert(num);
        }
    }

    for (int i = 0; i < 9; i++) {
        set<int> c = columns.at(i);
        set<int> r = rows.at(i);
        set<int> s = squares.at(i);
        if (s.size() != 9 || c.size() != 9 || r.size() != 9) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
