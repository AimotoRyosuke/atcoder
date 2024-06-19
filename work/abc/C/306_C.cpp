#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, vector<int>> A_map;
    for (int i = 0; i < N * 3; i++) {
        int a;
        cin >> a;
        A_map[a].push_back(i);
    }
    vector<vector<int>> ans;
    for (int i = 0; i < N; i++) {
        ans.push_back({i, A_map[i + 1][1]});
    }
    sort(ans.begin(), ans.end(),
         [](const auto &a, const auto &b) { return a[1] < b[1]; });
    for (int i = 0; i < N; i++) {
        cout << ans.at(i).at(0) + 1 << " ";
    }
    cout << endl;
}
