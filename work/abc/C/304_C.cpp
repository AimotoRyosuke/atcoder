#include <bits/stdc++.h>
using namespace std;

struct Cell {
    int x, y, index;
    Cell(int x, int y, int index) : x(x), y(y), index(index) {};
};

int main() {
    int N, D;
    cin >> N >> D;
    vector<Cell> cells;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        cells.emplace_back(x, y, i);
    }
    vector<bool> used(N);
    auto f = [&](auto f, Cell cell) -> void {
        used.at(cell.index) = true;
        for (int i = 0; i < N; i++) {
            Cell target = cells.at(i);
            if (used[target.index])
                continue;
            int x = cell.x - target.x;
            int y = cell.y - target.y;
            if (D * D >= x * x + y * y) {
                f(f, target);
            }
        }
    };
    f(f, cells.at(0));
    for (int i = 0; i < N; i++) {
        cout << (used[i] ? "Yes" : "No") << endl;
    }
}
