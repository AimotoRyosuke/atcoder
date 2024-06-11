#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    map<int, bool> W;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        W[b - 1] = true;
    }

    vector<int> ans;
    for (int i = 0; i < N; i++) {
        if (W[i])
            continue;
        ans.push_back(i + 1);
    }
    cout << (ans.size() == 1 ? ans.at(0) : -1) << endl;
}
