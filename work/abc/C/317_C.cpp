#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<pair<int, int>>> way(N);
    rep(i, M) {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        way[a].emplace_back(b, c);
        way[b].emplace_back(a, c);
    }
    int ans = 0;
    auto f = [&](auto f, int t, vector<bool> visited, int dist) -> void {
        visited[t] = true;
        ans = max(ans, dist);
        for (auto &pair : way[t]) {
            if (visited[pair.first])
                continue;
            f(f, pair.first, visited, dist + pair.second);
        }
    };

    rep(i, N) f(f, i, vector<bool>(N), 0);
    cout << ans << endl;
}

// ver1 has TLE error
// int main() {
//     int N, M;
//     cin >> N >> M;
//     map<int, map<int, int>> distance_map;
//     for (int i = 0; i < M; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         distance_map[a][b] = c;
//         distance_map[b][a] = c;
//     }
//     vector<int> order;
//     for (int i = 0; i < N; i++)
//         order.push_back(i + 1);

//     int ans = 0;
//     for (auto &[start, value] : distance_map) {
//         do {
//             int value = 0;
//             for (int i = 0; i < min(N - 1, M); i++) {
//                 int d = distance_map[order[i]][order[i + 1]];
//                 if (d == 0)
//                     break;
//                 value += d;
//             }
//             ans = max(ans, value);
//         } while (next_permutation(order.begin(), order.end()));
//     }
//     cout << ans << endl;
// }
