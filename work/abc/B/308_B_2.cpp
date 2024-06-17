#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> C(N);
    for (auto &c : C)
        cin >> c;
    vector<string> D(M);
    for (auto &d : D)
        cin >> d;
    vector<int> P(M + 1);
    for (auto &p : P)
        cin >> p;
    map<string, int> P_map;
    for (int i = 0; i < M; i++) {
        P_map[D.at(i)] = P.at(i + 1);
    }
    int prc = 0;
    for (int i = 0; i < N; i++) {
        string c = C.at(i);
        if (P_map.count(c))
            prc += P_map[c];
        else
            prc += P.at(0);
    }
    cout << prc << endl;
}
