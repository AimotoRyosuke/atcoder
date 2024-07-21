#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> AB(N);
    ll sum = 0;
    for (auto &ab : AB) {
        cin >> ab.first >> ab.second;
        ab.first++;
        sum += ab.second;
    }
    sort(AB.begin(), AB.end());
    if (sum <= K) {
        cout << 1 << '\n';
        return 0;
    }
    rep(i, N) {
        sum -= AB.at(i).second;
        if (sum <= K) {
            cout << AB.at(i).first << '\n';
            return 0;
        }
    }
}
