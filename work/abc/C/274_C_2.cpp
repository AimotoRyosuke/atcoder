#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> C(1, 1);
    unordered_map<int, int> M;
    rep(i, N) {
        int a;
        cin >> a;
        int ni = i + 1;
        C.push_back(ni * 2);
        C.push_back(ni * 2 + 1);
        M[ni * 2] = M[a] + 1;
        M[ni * 2 + 1] = M[a] + 1;
    }
    rep(i, (int)C.size()) cout << M[C.at(i)] << '\n';
}
