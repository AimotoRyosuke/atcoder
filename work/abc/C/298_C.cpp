#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<set<int>> nums(200001);
    vector<vector<int>> boxes(N + 1);
    int e, i, j;
    rep(s, Q) {
        cin >> e;
        if (e == 1) {
            cin >> i >> j;
            nums[i].insert(j);
            boxes[j].push_back(i);
        } else if (e == 2) {
            cin >> j;
            auto &box = boxes[j];
            sort(box.begin(), box.end());
            for (auto &num : box)
                cout << num << ' ';
            cout << '\n';
        } else if (e == 3) {
            cin >> i;
            auto &num = nums[i];
            for (auto &box : num)
                cout << box << ' ';
            cout << '\n';
        }
    }
}
