#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> PF(N);
    for (int i = 0; i < N; i++) {
        int P, C;
        cin >> P >> C;
        PF.at(i).push_back(P);
        for (int j = 0; j < C; j++) {
            int f;
            cin >> f;
            PF.at(i).push_back(f);
        }
    }
    bool ok = false;
    for (int i = 0; i < N; i++) {
        // PF.at(i)の上位互換があるかどうか
        for (int j = 0; j < N; j++) {
            vector<int> pi = PF.at(i), pj = PF.at(j);
            if (i == j || pi.at(0) < pj.at(0) || pj.size() > pj.size())
                continue;
            bool all_contain = true;
            for (int x = 1; x < (int)pi.size(); x++) {
                bool contain = false;
                for (int y = 1; y < (int)pj.size(); y++)
                    if (pi.at(x) == pj.at(y))
                        contain = true;
                if (!contain)
                    all_contain = false;
            }
            if (all_contain && (pi.at(0) > pj.at(0) || pi.size() < pj.size())) {
                ok = true;
                break;
            }
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}
