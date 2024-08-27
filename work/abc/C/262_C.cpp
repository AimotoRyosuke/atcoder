#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A) {
        cin >> a;
        a--;
    }
    ll same_idx = 0, comb = 0;
    ;
    rep(i, N) {
        if (i == A.at(i))
            same_idx++;
        else if (A.at(A.at(i)) == i)
            comb++;
    }
    ll value = same_idx * (same_idx - 1) / 2;
    ll cnt = value + comb / 2;
    cout << cnt << '\n';
}
