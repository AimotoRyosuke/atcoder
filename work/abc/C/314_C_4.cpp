#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    string s;
    cin >> s;
    vector<vector<int>> A(M);
    rep(i, N) {
        int a;
        cin >> a;
        a--;
        A.at(a).push_back(i);
    }
    vector<int> order(N);
    rep(i, M) {
        auto a = A.at(i);
        int s = a.size();
        rep(j, s) {
            if (j == s - 1)
                order[a.at(0)] = a.at(j);
            else
                order[a.at(j + 1)] = a.at(j);
        }
    }
    rep(i, N) { cout << s.at(order[i]); }
    cout << '\n';
}
