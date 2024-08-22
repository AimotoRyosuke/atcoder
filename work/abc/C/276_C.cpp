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
    auto B = A;
    bool next = false;
    vector<int> ans;
    do {
        if (next) {
            ans = B;
            break;
        }
        if (A == B)
            next = true;

    } while (prev_permutation(B.begin(), B.end()));
    rep(i, N) cout << ans.at(i) + 1 << ' ';
}
