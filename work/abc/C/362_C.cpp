#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<pair<ll, ll>> LR(N);
    for (auto &lr : LR)
        cin >> lr.first >> lr.second;
    ll l_sum = 0, r_sum = 0;
    rep(i, N) {
        l_sum += LR.at(i).first;
        r_sum += LR.at(i).second;
    }
    if (l_sum > 0 && r_sum > 0 || l_sum < 0 && r_sum < 0) {
        cout << "No" << '\n';
        return 0;
    }
    vector<ll> ans;
    ll cur_sum = l_sum;
    rep(i, N) {
        ll l = LR[i].first, r = LR[i].second;
        if (cur_sum < 0) {
            ll gain = min(-cur_sum, r - l);
            cur_sum += gain;
            ans.push_back(l + gain);
        } else {
            ans.push_back(l);
        }
    }
    cout << "Yes" << '\n';
    rep(i, N) cout << ans.at(i) << ' ';
}
