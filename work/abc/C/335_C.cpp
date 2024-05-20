#include <bits/stdc++.h>
using namespace std;

void move(vector<int> &pos, char id) {
    if (id == 'R')
        pos.at(0)++;
    else if (id == 'L')
        pos.at(0)--;
    else if (id == 'U')
        pos.at(1)++;
    else if (id == 'D')
        pos.at(1)--;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> histories, ans;
    for (int i = 0; i < N; i++)
        histories.push_back({N - i, 0});
    for (int i = 0; i < Q; i++) {
        int no = 0;
        cin >> no;
        if (no == 1) {
            // 移動処理
            char c;
            cin >> c;
            vector<int> new_pos = histories.at(histories.size() - 1);
            move(new_pos, c);
            histories.push_back(new_pos);
        } else if (no == 2) {
            int p;
            cin >> p;
            ans.push_back(histories.at(histories.size() - p));
        }
    }
    for (auto a : ans)
        cout << a.at(0) << " " << a.at(1) << endl;
}
