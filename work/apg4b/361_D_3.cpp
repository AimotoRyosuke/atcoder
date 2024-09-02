#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s, t;
    cin >> s >> t;

    int ans = -1;
    string tgt = t + "..";
    string start = s + "..";
    unordered_map<string, bool> used;
    used[start] = true;
    queue<pair<string, int>> que;
    que.emplace(start, 0);
    while (!que.empty()) {
        auto q = que.front();
        que.pop();
        if (q.first == tgt) {
            ans = q.second;
            break;
        }
        int j = 0;
        while (q.first.at(j) != '.')
            j++;
        rep(i, N + 1) {
            if (q.first.at(i) != '.' && q.first.at(i + 1) != '.') {
                string next = q.first;
                swap(next[i], next[j]);
                swap(next[i + 1], next[j + 1]);
                if (used[next])
                    continue;
                used[next] = true;
                que.emplace(next, q.second + 1);
            }
        }
    }
    cout << ans << '\n';
}
