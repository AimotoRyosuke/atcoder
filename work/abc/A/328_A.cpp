#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> S(N);
    int score = 0;
    for (auto &s : S) {
        cin >> s;
        if (s <= X)
            score += s;
    }
    cout << score << endl;
}
