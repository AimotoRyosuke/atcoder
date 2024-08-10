#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    unordered_map<int, int> P;
    vector<int> ans;
    rep(i, N) {
        int e, num;
        cin >> e;
        if (e == 1) {
            cin >> num;
            P[num]++;
        } else if (e == 2) {
            cin >> num;
            P[num]--;
            if (P[num] == 0) {
                P.erase(num);
            }
        } else {
            ans.push_back(P.size());
        }
    }
    rep(i, (int)ans.size()) { cout << ans.at(i) << '\n'; }
}
