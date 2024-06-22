#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, H, K;
    cin >> N >> M >> H >> K;
    string S;
    cin >> S;
    map<pair<int, int>, bool> heals;
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        heals[{x, y}] = true;
    }
    pair<int, int> cur = {0, 0};
    auto move = [&](char c) -> void {
        if (c == 'R')
            cur.first++;
        else if (c == 'L')
            cur.first--;
        else if (c == 'U')
            cur.second++;
        else if (c == 'D')
            cur.second--;
        H--;
    };
    bool ok = true;
    for (int i = 0; i < N; i++) {
        char c = S.at(i);
        move(c);
        if (H < 0) {
            ok = false;
            break;
        }
        if (heals[cur] && H < K) {
            heals[cur] = false;
            H = K;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}
