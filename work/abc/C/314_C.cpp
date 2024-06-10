#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vector<vector<int>> C(M);
    for (int i = 0; i < N; i++) {
        int c;
        cin >> c;
        C.at(c - 1).push_back(i);
    }
    vector<int> order(N);
    for (auto &c : C) {
        for (int i = 0; i < (int)c.size(); i++) {
            if (i == c.size() - 1)
                order.at(c.at(0)) = c.at(i);
            else
                order.at(c.at(i + 1)) = c.at(i);
        }
    }
    for (auto o : order)
        cout << S.at(o);
    cout << endl;
}
