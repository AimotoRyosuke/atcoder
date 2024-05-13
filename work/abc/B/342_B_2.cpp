#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (auto &p : P)
        cin >> p;
    int Q;
    cin >> Q;
    int a, b;
    vector<vector<int>> AB(Q, vector<int>(2, 0));
    for (auto &ab : AB)
        cin >> ab.at(0) >> ab.at(1);
    for (auto ab : AB)
        for (int i = 0; i < (int)P.size(); i++) {
            if (P.at(i) == ab.at(0)) {
                cout << ab.at(0) << endl;
                break;
            } else if (P.at(i) == ab.at(1)) {
                cout << ab.at(1) << endl;
                break;
            }
        }
}
