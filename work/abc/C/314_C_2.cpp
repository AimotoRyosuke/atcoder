#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vector<vector<pair<int, int>>> C_map(M);
    rep(i, N) {
        int c;
        cin >> c;
        c--;
        C_map.at(c).push_back({i, i});
    }
    vector<pair<int, int>> ans;
    for (auto &pairs : C_map) {
        int size = pairs.size();
        rep(i, size) {
            pairs.at(i).first = pairs.at((i + 1) % size).second;
            ans.push_back(pairs.at(i));
        }
    }
    sort(ans.begin(), ans.end());
    rep(i, ans.size()) cout << (S.at(ans.at(i).second));
    cout << '\n';
}
