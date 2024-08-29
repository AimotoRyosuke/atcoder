#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> A(T);
    for (auto &a : A) {
        cin >> a;
        a--;
    }
    vector<vector<int>> rows(N), cols(N);
    vector<int> s1, s2;
    int ans = -1;
    rep(i, T) {
        int a = A.at(i);
        rows.at(a / N).push_back(a);
        cols.at(a % N).push_back(a);
        if (a / N == a % N)
            s1.push_back(a);
        if (N - 1 - a % N == a / N)
            s2.push_back(a);

        if (rows.at(a / N).size() == N || cols.at(a % N).size() == N ||
            s1.size() == N || s2.size() == N) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << '\n';
}
