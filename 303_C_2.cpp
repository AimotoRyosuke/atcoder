#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M, H, K;
    cin >> N >> M >> H >> K;
    string S;
    cin >> S;
    map<pair<int, int>, bool> I;
    rep(i, M) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        I[p] = true;
    }
    pair<int, int> pos{0, 0};
    auto move = [&](char c) -> bool {
        if (H <= 0)
            return false;
        H--;
        if (c == 'R')
            pos.first++;
        else if (c == 'U')
            pos.second++;
        else if (c == 'D')
            pos.second--;
        else if (c == 'L')
            pos.first--;
        if (I[pos] && H < K) {
            H = K;
            I[pos] = false;
        }
        return true;
    };
    bool ok = true;
    rep(i, (int)S.size()) {
        if (!move(S.at(i))) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
