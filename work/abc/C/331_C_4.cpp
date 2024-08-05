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
    auto E = A;
    unordered_map<ll, ll> m;
    sort(E.rbegin(), E.rend());
    ll next = 0, sum = 0;
    rep(i, N) {
        if (i != 0 && E.at(i) != E.at(i - 1)) {
            m[E.at(i - 1)] = next;
            next = sum;
        }
        if (E.at(i) == E.at(N - 1)) {
            m[E.at(i)] = next;
            break;
        }
        sum += E.at(i);
    }
    rep(i, N) cout << m[A.at(i)] << ' ';
}
