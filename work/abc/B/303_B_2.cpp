#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A_list(M, vector<int>(N));
    map<int, vector<bool>> A_map;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A_list.at(i).at(j);
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N - 1; j++) {
            int a = A_list.at(i).at(j);
            if (A_map[A_list.at(i).at(j) - 1].size() == 0) {
                A_map[A_list.at(i).at(j) - 1] = vector<bool>(N);
            }
            if (A_map[A_list.at(i).at(j + 1) - 1].size() == 0) {
                A_map[A_list.at(i).at(j + 1) - 1] = vector<bool>(N);
            }
            A_map[A_list.at(i).at(j) - 1].at(A_list.at(i).at(j + 1) - 1) = true;
            A_map[A_list.at(i).at(j + 1) - 1].at(A_list.at(i).at(j) - 1) = true;
        }
    }
    int bad_cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                continue;
            if (!A_map[i][j])
                bad_cnt++;
        }
    }
    bad_cnt /= 2;
    cout << bad_cnt << endl;
}
