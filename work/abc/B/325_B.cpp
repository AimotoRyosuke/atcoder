#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> pair(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++) {
        cin >> pair.at(i).at(0) >> pair.at(i).at(1);
    }
    int max_people = 0;
    for (int i = 0; i < (int)pair.size(); i++) {
        int time = pair.at(i).at(1);
        int people = 0;
        for (int j = 0; j < (int)pair.size(); j++) {
            int time_diff = (pair.at(j).at(1) - time + 24) % 24;
            if (time_diff <= 8) {
                people += pair.at(j).at(0);
            }
        }
        max_people = max(max_people, people);
    }
    cout << max_people << endl;
}
