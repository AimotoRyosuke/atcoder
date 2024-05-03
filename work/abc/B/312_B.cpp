#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s.at(i);
    for (int i = 0; i < n - 8; i++) {
        // iは縦方向の始点
        int count = 0;
        for (int j = 0; j < m - 8; j++) {
            // jは横方向の始点
            for (int k = 0; k < 3; k++)
                for (int l = 0; l < 3; l++) {
                    count++;
                    if (s.at(k + i).at(l + j) != '#') {
                        goto go_exit;
                    }
                }
            for (int k = 0; k < 3; k++)
                for (int l = 0; l < 3; l++) {
                    count++;
                    if (s.at(k + i + 6).at(l + j + 6) != '#') {
                        goto go_exit;
                    }
                }
            for (int k = 0; k < 4; k++) {
                int l = j + 3;
                count++;
                if (s.at(k + i).at(l) != '.') {
                    goto go_exit;
                }
            }
            for (int l = 0; l < 3; l++) {
                int k = i + 3;
                count++;
                if (s.at(k).at(l + j) != '.') {
                    goto go_exit;
                }
            }
            for (int k = 0; k < 4; k++) {
                int l = j + 5;
                count++;
                if (s.at(k + i + 5).at(l) != '.') {
                    goto go_exit;
                }
            }
            for (int l = 0; l < 3; l++) {
                int k = i + 5;
                count++;
                if (s.at(k).at(l + j + 6) != '.') {
                    goto go_exit;
                }
            }
            cout << i + 1 << " " << j + 1 << endl;
        go_exit:
            continue;
        }
    }
}
