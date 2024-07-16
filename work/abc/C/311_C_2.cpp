#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A) {
        cin >> a;
        a--;
    }
    vector<bool> used(N);
    int cur = 0;
    while (!used[cur]) {
        used[cur] = true;
        cur = A[cur];
    }
    vector<int> ans(1, cur);
    int first = cur;
    cur = A.at(cur);
    while (cur != first) {
        ans.push_back(cur);
        cur = A.at(cur);
    }
    int size = ans.size();
    cout << size << '\n';
    rep(i, size) { cout << ans.at(i) + 1 << " "; }
    cout << '\n';
}
