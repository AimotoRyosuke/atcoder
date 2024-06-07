#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, map<int, int>> cell_map;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int x = a; x < b; x++) {
            for (int y = c; y < d; y++) {
                if (!cell_map[x][y]) {
                    cell_map[x][y]++;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}
