#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s, t;
    cin >> s >> t;

    auto f = [&]() -> int {
        auto start = s + "..";
        auto tgt = t + "..";
        unordered_map<string, bool> used;
        queue<pair<string, int>> que;
        que.emplace(start, 0);
        used[start] = true;
        while (que.size()) {
            pair<string, int> q = que.front();
            que.pop();
            if (q.first == tgt) {
                return q.second;
            }
            int j = 0;
            while (q.first.at(j) != '.')
                j++;
            rep(i, N + 1) {
                if (q.first.at(i) == '.' || q.first.at(i + 1) == '.')
                    continue;
                auto next = q.first;
                swap(next.at(i), next.at(j));
                swap(next.at(i + 1), next.at(j + 1));
                if (used[next])
                    continue;
                used[next] = true;
                que.emplace(next, q.second + 1);
            }
        }
        return -1;
    };
    int ans = f();
    cout << ans << '\n';
}
