#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> beans(N, vector<int>(2, 0));
    map<int, int> min_beans;
    for (int i = 0; i < N; i++) {
        cin >> beans.at(i).at(0) >> beans.at(i).at(1);
        if (min_beans.count(beans.at(i).at(1)) == 0) {
            min_beans[beans.at(i).at(1)] = beans.at(i).at(0);
        } else {
            min_beans[beans.at(i).at(1)] =
                min(min_beans[beans.at(i).at(1)], beans.at(i).at(0));
        }
    }
    int result = 0;
    for (const auto &[key, value] : min_beans) {
        result = max(result, value);
    }
    cout << result << endl;
}
