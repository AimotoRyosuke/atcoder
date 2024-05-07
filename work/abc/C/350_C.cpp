#include <bits/stdc++.h>
using namespace std;

void array_A(vector<int> &A, int index, vector<vector<int>> &switch_pairs) {
    int current = A.at(index);
    if (current - 1 == index)
        return;
    A.at(index) = A.at(current - 1);
    A.at(current - 1) = current;
    switch_pairs.push_back({index, current - 1});
    array_A(A, index, switch_pairs);
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<vector<int>> switch_pairs;
    for (int i = 0; i < N - 1; i++) {
        array_A(A, i, switch_pairs);
    }
    cout << switch_pairs.size() << endl;
    for (int i = 0; i < (int)switch_pairs.size(); i++) {
        auto pair = switch_pairs.at(i);
        cout << pair.at(0) + 1 << " " << pair.at(1) + 1 << endl;
    }
}

// ver.1
// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (auto &a : A)
//         cin >> a;
//     vector<vector<int>> switch_pairs;
//     for (int i = 0; i < N - 1; i++) {
//         int l = A.at(i);
//         if (l == i + 1)
//             continue;
//         int r;
//         for (int j = i + 1; j < N; j++)
//             if (A.at(j) == i + 1) {
//                 r = A.at(j);
//                 A.at(i) = r, A.at(j) = l;
//                 switch_pairs.push_back({i, j});
//                 break;
//             }
//     }
//     cout << switch_pairs.size() << endl;
//     for (int i = 0; i < (int)switch_pairs.size(); i++) {
//         auto pair = switch_pairs.at(i);
//         cout << pair.at(0) + 1 << " " << pair.at(1) + 1 << endl;
//     }
// }
