#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (auto &a : A) {
        cin >> a;
        a--;
    }
    int r = 0;
    rep(i, N) {
        int cur = r;
        while (i > A.at(r))
            r++;
        cout << A.at(r) - i << '\n';
    }
}
