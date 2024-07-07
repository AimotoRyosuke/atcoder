// 復習する
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
    }
    ll total = 0;
    map<int, ll> Sum;
    vector<int> C = A;
    sort(C.rbegin(), C.rend());
    int l = 0, r = 0;
    rep(i, N) {
        if (i == 0 || C.at(i) != C.at(i - 1)) {
            Sum[C[i]] = total;
        }
        total += (ll)C.at(i);
    }
    rep(i, N) cout << Sum[A.at(i)] << " ";
}
