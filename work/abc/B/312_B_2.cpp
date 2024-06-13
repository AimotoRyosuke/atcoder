#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    auto check = [&](int h, int w) -> bool {
        bool ok = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int H = h + i, W = w + j;
                if (S.at(H).at(W) != '#' || S.at(H + 6).at(W + 6) != '#') {
                    ok = false;
                    break;
                }
            }
            for (int i = 0; i < 3; i++) {
                if (S.at(h + i).at(w + 3) != '.' ||
                    S.at(h + i + 6).at(w + 5) != '.') {
                    ok = false;
                    break;
                }
            }
            for (int i = 0; i < 4; i++) {
                if (S.at(h + 3).at(w + i) != '.' ||
                    S.at(h + 5).at(w + i + 5) != '.') {
                    ok = false;
                    break;
                }
            }
        }
        return ok;
    };

    for (int h = 0; h < N - 8; h++) {
        for (int w = 0; w < M - 8; w++) {
            if (check(h, w))
                cout << h + 1 << " " << w + 1 << endl;
        }
    }
}
