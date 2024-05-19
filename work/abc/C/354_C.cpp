#include <bits/stdc++.h>
using namespace std;

void remove(std::vector<vector<int>> &vector, unsigned int index) {
    vector.erase(vector.begin() + index);
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> AC(N, vector<int>(3));
    for (int i = 0; i < N; i++) {
        cin >> AC.at(i).at(0) >> AC.at(i).at(1);
        AC.at(i).at(2) = i;
    }
    sort(AC.begin(), AC.end(),
         [](const vector<int> &alpha, const vector<int> &beta) {
             return alpha[1] < beta[1];
         });
    int v = 0;
    vector<int> ans;
    for (int i = 0; i < N; i++) {
        if (v <= AC.at(i).at(0)) {
            v = AC.at(i).at(0);
            ans.push_back(AC.at(i).at(2));
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto a : ans) {
        cout << a + 1 << " ";
    }
}

// int main() {
//     int N;
//     cin >> N;
//     vector<vector<int>> AC(N, vector<int>(3));
//     for (int i = 0; i < N; i++) {
//         cin >> AC.at(i).at(0) >> AC.at(i).at(1);
//         AC.at(i).at(2) = i;
//     }
//     sort(AC.begin(), AC.end(),
//          [](const vector<int> &alpha, const vector<int> &beta) {
//              return alpha[1] > beta[1];
//          });
//     int max_A = 0;
//     int min_C = 0;
//     vector<int> rm_list;
//     for (int i = 0; i < N - 1; i++) {
//         for (int j = i + 1; j < N; j++) {
//             if (AC.at(i).at(0) < AC.at(j).at(0)) {
//                 rm_list.push_back(i);
//                 break;
//             }
//         }
//     }
//     sort(rm_list.rbegin(), rm_list.rend());
//     for (auto i : rm_list)
//         remove(AC, i);
//     sort(AC.begin(), AC.end(),
//          [](const vector<int> &alpha, const vector<int> &beta) {
//              return alpha[2] < beta[2];
//          });
//     cout << AC.size() << endl;
//     for (int i = 0; i < AC.size(); i++) {
//         cout << AC.at(i).at(2) + 1 << " ";
//     }
//     cout << endl;
// }
