#include <bits/stdc++.h>
using namespace std;

struct State {
    string stones;
    int moves;
};

int minMoves(const string &initial, const string &target) {
    int N = initial.length();
    string start = initial + "..";

    queue<State> q;
    q.push({start, 0});

    unordered_set<string> visited;
    visited.insert(start);

    while (!q.empty()) {
        State current = q.front();
        q.pop();

        if (current.stones.substr(0, N) == target) {
            return current.moves;
        }

        for (int i = 0; i < N + 1; ++i) {
            if (current.stones[i] != '.' && current.stones[i + 1] != '.') {
                for (int j = 0; j < N + 1; ++j) {
                    if (current.stones[j] == '.' &&
                        current.stones[j + 1] == '.') {
                        string next = current.stones;
                        next[j] = current.stones[i];
                        next[j + 1] = current.stones[i + 1];
                        next[i] = '.';
                        next[i + 1] = '.';

                        if (visited.find(next) == visited.end()) {
                            visited.insert(next);
                            q.push({next, current.moves + 1});
                        }
                    }
                }
            }
        }
    }

    return -1; // 到達不可能な場合
}

int main() {
    int N;
    string S, T;

    cin >> N >> S >> T;
    int result = minMoves(S, T);
    cout << result << endl;

    return 0;
}
