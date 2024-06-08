#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    map<int, map<int, int>> distance_map;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        distance_map[a][b] = c;
        distance_map[b][a] = c;
    }
    vector<int> order;
    for (int i = 0; i < N; i++)
        order.push_back(i + 1);

    int ans = 0;
    for (auto &[start, value] : distance_map) {
        do {
            int value = 0;
            for (int i = 0; i < min(N - 1, M); i++) {
                int d = distance_map[order[i]][order[i + 1]];
                if (d == 0)
                    break;
                value += d;
            }
            ans = max(ans, value);
        } while (next_permutation(order.begin(), order.end()));
    }
    cout << ans << endl;
}
