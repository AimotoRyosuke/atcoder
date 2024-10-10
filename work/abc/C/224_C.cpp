#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<pair<ll, ll>> P(N);
    rep(i, N) { cin >> P[i].first >> P[i].second; }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                auto p1 = P[i], p2 = P[j], p3 = P[k];
                ll dx1 = p1.first - p2.first, dy1 = p1.second - p2.second;
                if (dx1 < 0) {
                    dx1 *= -1, dy1 *= -1;
                }
                ll dx2 = p2.first - p3.first, dy2 = p2.second - p3.second;
                if (dx2 < 0) {
                    dx2 *= -1, dy2 *= -1;
                }
                if (dx1 * dy2 == dx2 * dy1)
                    continue;
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
}
