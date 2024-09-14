#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
const ll ADD = 1001001001;

int main() {
    int N;
    cin >> N;
    vector<pair<ll, int>> O(N);
    for (auto &o : O)
        cin >> o.first >> o.second;
    string s;
    cin >> s;
    map<int, vector<pair<ll, bool>>> M;
    rep(i, N) { M[O[i].second].push_back({O[i].first, s.at(i) == 'R'}); }
    bool ok = false;
    for (auto &[k, v] : M) {
        sort(v.begin(), v.end());
        int s = v.size();
        rep(i, s) {
            if (v.at(i).second)
                v.at(i).first += ADD;
            else
                v.at(i).first -= ADD;
        }
        rep(i, s - 1) {
            if (v.at(i) > v.at(i + 1))
                ok = true;
        }
        if (ok)
            break;
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
