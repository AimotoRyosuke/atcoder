#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> coordinate(N, vector<int>(2, 0));
    for (auto &cord : coordinate) {
        cin >> cord.at(0) >> cord.at(1);
    }
    vector<vector<int>> results(N, vector<int>(2, 0));
    for (int i = 0; i < N; i++) {
        auto cord = coordinate.at(i);
        for (int j = 0; j < N; j++) {
            if (i == j)
                continue;
            auto target = coordinate.at(j);
            int x_diff = target.at(0) - cord.at(0);
            int y_diff = target.at(1) - cord.at(1);
            int distance = x_diff * x_diff + y_diff * y_diff;
            if (results.at(i).at(0) < distance) {
                results.at(i).at(0) = distance;
                results.at(i).at(1) = j;
            }
        }
        cout << results.at(i).at(1) + 1 << endl;
    }
}
