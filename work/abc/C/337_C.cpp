#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> indexed_A(N, vector<int>(2, 0));
    int idx = 0;
    for (int i = 0; i < N; i++) {
        cin >> indexed_A.at(i).at(0);
        indexed_A.at(i).at(1) = i;
        if (indexed_A.at(i).at(0) == -1)
            idx = i;
    }
    sort(indexed_A.begin(), indexed_A.end(),
         [](const vector<int> &alpha, const vector<int> &beta) {
             return alpha[0] < beta[0];
         });
    vector<int> ans;
    ans.push_back(indexed_A.at(0).at(1));
    for (int i = 1; i < N; i++) {
        for (int j = idx; j < idx + 2; j++) {
            if (j >= N) {
                continue;
            }
            if (indexed_A.at(j).at(0) == idx + 1) {
                idx = indexed_A.at(j).at(1);
                ans.push_back(idx);
                break;
            }
        }
    }
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans.at(i) + 1 << " ";
    }
    cout << endl;
}
