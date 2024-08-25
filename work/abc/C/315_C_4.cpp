#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> fl(N);
    rep(i, N) {
        int f, s;
        cin >> f >> s;
        f--;
        fl[f].push_back(s);
    }
    int diff_max = 0, same_max = 0;
    vector<int> fl_max;
    rep(i, N) {
        sort(fl.at(i).rbegin(), fl.at(i).rend());
        if (!fl.at(i).empty())
            fl_max.push_back(fl.at(i).at(0));
        if (fl.at(i).size() < 2)
            continue;
        same_max = max(same_max, fl.at(i).at(0) + fl.at(i).at(1) / 2);
    }
    if (fl_max.size() >= 2) {
        sort(fl_max.rbegin(), fl_max.rend());
        diff_max = fl_max.at(0) + fl_max.at(1);
    }
    cout << max(same_max, diff_max) << '\n';
}
