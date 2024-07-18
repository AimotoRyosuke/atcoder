#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct State {
    string stones;
    int cnt;
};

int minMoves(string start, string goal) {
    queue<State> q;
    q.push({start, 0});

    unordered_set<string> visited;
    visited.insert(start);
    while (!q.empty()) {
        State s = q.front();
        q.pop();
        int j = 0;
        while (s.stones.at(j) != '.')
            j++;

        if (s.stones == goal)
            return s.cnt;

        rep(i, start.size() - 1) {
            if (i == j)
                continue;
            auto next = s.stones;
            swap(next.at(i), next.at(j));
            swap(next.at(i + 1), next.at(j + 1));
            if (visited.find(next) != visited.end())
                continue;
            visited.insert(next);
            q.push({next, s.cnt + 1});
        }
    }
    return -1;
}

int main() {
    int N;
    cin >> N;
    string S, T;
    cin >> S >> T;
    int result = minMoves(S + "..", T + "..");
    cout << result << endl;

    return 0;
}
