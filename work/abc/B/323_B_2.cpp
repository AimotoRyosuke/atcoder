#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> i_win;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        int cnt = 0;
        for (int j = 0; j < (int)s.size(); j++) {
            if (s.at(j) == 'o')
                cnt++;
        }
        i_win.push_back({i, cnt});
    }
    sort(i_win.begin(), i_win.end(), [](const auto &a, const auto &b) {
        if (a.second != b.second)
            return a.second > b.second;
        return a.first < b.first;
    });

    for (auto [i, cnt] : i_win)
        cout << i + 1 << " ";
    cout << endl;
}
