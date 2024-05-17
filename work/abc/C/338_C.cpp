#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> Q(N), A(N), B(N);
    for (auto &q : Q)
        cin >> q;
    for (auto &a : A)
        cin >> a;
    for (auto &b : B)
        cin >> b;
    int count = 0;

    bool ng = false;
    for (int i = 0; i <= 1000000; i++) {
        int min_b = 1000000;
        for (int j = 0; j < N; j++) {
            if (Q.at(j) < i * A.at(j)) {
                ng = true;
            }
        }
        if (ng)
            break;
        for (int j = 0; j < N; j++) {
            if (B.at(j) == 0)
                continue;
            min_b = min(min_b, (Q.at(j) - i * A.at(j)) / B.at(j));
        }
        count = max(count, i + min_b);
    }

    cout << count << endl;
}
