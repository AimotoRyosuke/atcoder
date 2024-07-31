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
    int cur = 0;
    vector<bool> used(N);
    while (!used[cur]) {
        used[cur] = true;
        cur = A[cur];
    }
    int first = cur;
    cur = A[cur];
    vector<int> ans = {cur};
    while (first != cur) {
        cur = A[cur];
        ans.push_back(cur);
    }
    int size = ans.size();
    cout << size << '\n';
    rep(i, size) { cout << A[ans[i]] + 1 << ' '; }
}
