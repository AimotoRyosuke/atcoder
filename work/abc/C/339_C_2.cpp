#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    ll m = 10000000000;
    ll cur = 0;
    rep(i, N) {
        cur += (ll)A.at(i);
        m = min(m, cur);
    }
    cout << (m < 0 ? cur - m : cur) << endl;
}
