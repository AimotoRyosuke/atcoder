#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<string> S(N);
    vector<unordered_map<int, int>> SM;
    for (auto &s : S) {
        cin >> s;
        unordered_map<int, int> sm;
        rep(i, (int)s.size()) sm[s.at(i)]++;
        SM.push_back(sm);
    }
    int ans = 0;
    rep(s, 1 << N) {
        if (s == 0)
            continue;
        unordered_map<int, int> sm;
        rep(i, N) {
            if (s >> i & 1) {
                for (auto &[k, v] : SM[i]) {
                    sm[k] += v;
                }
            }
            int cnt = 0;
            for (auto &[k, v] : sm)
                if (v == K)
                    cnt++;
            ans = max(ans, cnt);
        }
    }
    cout << ans << '\n';
}
