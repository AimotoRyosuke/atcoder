#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S_list(N);
    for (auto &s : S_list)
        cin >> s;
    vector<int> order(N);
    iota(order.begin(), order.end(), 0);
    bool ans = false;
    do {
        bool ok = true;
        for (int i = 0; i < N - 1; i++) {
            int diff_cnt = 0;
            string l = S_list[order[i]];
            string r = S_list[order[i + 1]];
            for (int j = 0; j < M; j++) {
                if (l.at(j) != r.at(j))
                    diff_cnt++;
            }
            if (diff_cnt != 1) {
                ok = false;
                break;
            }
        }
        if (ok) {
            ans = true;
            break;
        }
    } while (next_permutation(order.begin(), order.end()));

    cout << (ans ? "Yes" : "No") << endl;
}
