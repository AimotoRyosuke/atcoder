#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    vector<vector<int>> S_int(N);
    for (int i = 0; i < N; i++) {
        string s = S.at(i);
        for (auto c : s)
            S_int.at(i).push_back((c == 'o' ? 1 : 0));
    }
    vector<int> order(N);
    for (int i = 0; i < N; i++)
        order.at(i) = i;

    int min_cnt = N;
    do {
        int cnt = 0;
        vector<int> crr(M, 0);
        bool ok = true;
        for (int i = 0; i < N; i++) {
            ok = true;
            for (int j = 0; j < M; j++) {
                crr.at(j) += S_int.at(order.at(i)).at(j);
                if (crr.at(j) == 0)
                    ok = false;
            }
            if (ok) {
                cnt = i + 1;
                break;
            }
        }
        if (ok) {
            min_cnt = min(min_cnt, cnt);
        }
    } while (next_permutation(order.begin(), order.end()));
    cout << min_cnt << endl;
}
