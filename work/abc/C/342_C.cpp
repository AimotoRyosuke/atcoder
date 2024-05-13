#include <bits/stdc++.h>
using namespace std;

const string alphabet = "abcdefghijklmnopqrstuvwxyz";

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int Q;
    cin >> Q;
    string to = alphabet;

    for (int i = 0; i < Q; i++) {
        char a, b;
        cin >> a >> b;
        for (int i = 0; i < 26; i++)
            if (to.at(i) == a)
                to.at(i) = b;
    }
    for (int i = 0; i < N; i++) {
        char c = S.at(i);
        for (int j = 0; j < 26; j++) {
            if (c == alphabet.at(j))
                S.at(i) = to.at(j);
        }
    }
    cout << S << endl;
}

// ver2（has TLE ERROR 13 / 29）
// int main() {
//     int N;
//     cin >> N;
//     string S;
//     cin >> S;
//     int Q;
//     cin >> Q;
//     map<char, vector<int>> s_index;
//     for (int i = 0; i < N; i++) {
//         s_index[S.at(i)].push_back(i);
//     }
//     vector<vector<char>> CD(Q, vector<char>(2));
//     for (auto &cd : CD)
//         cin >> cd.at(0) >> cd.at(1);

//     for (int i = 0; i < (int)CD.size(); i++) {
//         char c = CD.at(i).at(0);
//         char d = CD.at(i).at(1);
//         if (c == d || s_index[c].empty())
//             continue;
//         vector<int> a(s_index[c].size() + s_index[d].size());
//         merge(s_index[d].begin(), s_index[d].end(), s_index[c].begin(),
//               s_index[c].end(), a.begin());
//         s_index[d] = a;
//         s_index[c] = {};
//     }
//     map<int, char> result_map;
//     for (auto index : s_index)
//         for (int j = 0; j < index.second.size(); j++)
//             result_map[index.second.at(j)] = index.first;
//     for (int i = 0; i < N; i++) {
//         cout << result_map[i];
//     }
//     cout << endl;
// }

// ver1（has TLE ERROR 20 / 29）
// int main() {
//     int N;
//     cin >> N;
//     string S;
//     cin >> S;
//     int Q;
//     cin >> Q;
//     map<char, int> s_count;
//     for (auto s : S)
//         s_count[s]++;
//     vector<vector<char>> CD(Q, vector<char>(2));
//     for (auto &cd : CD)
//         cin >> cd.at(0) >> cd.at(1);

//     for (int i = 0; i < (int)CD.size(); i++) {
//         char c = CD.at(i).at(0);
//         char d = CD.at(i).at(1);
//         if (c == d || s_count.count(c) == 0)
//             continue;
//         for (auto &s : S)
//             if (s == c) {
//                 s = d;
//                 int c_count = s_count[c];
//                 s_count[c] = 0;
//                 s_count[d] += c_count;
//             }
//     }
//     cout << S << endl;
// }
