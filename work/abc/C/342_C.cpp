#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int Q;
    cin >> Q;
    map<char, int> s_count;
    for (auto s : S)
        s_count[s]++;
    vector<vector<char>> CD(Q, vector<char>(2));
    for (auto &cd : CD)
        cin >> cd.at(0) >> cd.at(1);

    for (int i = 0; i < (int)CD.size(); i++) {
        char c = CD.at(i).at(0);
        char d = CD.at(i).at(1);
        if (c == d || s_count.count(c) == 0)
            continue;
        for (auto &s : S)
            if (s == c) {
                s = d;
                int c_count = s_count[c];
                s_count[c] = 0;
                s_count[d] += c_count;
            }
    }
    cout << S << endl;
}
