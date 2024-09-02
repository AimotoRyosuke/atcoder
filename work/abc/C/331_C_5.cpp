#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i, N) { cin >> A.at(i); }
    auto B = A;
    unordered_map<int, ll> M;
    sort(B.rbegin(), B.rend());
    ll next = 0, cur = 0;
    rep(i, N) {
        next += B.at(i);
        M[B.at(i)] = cur;
        if (i != N - 1 && B.at(i) != B.at(i + 1))
            cur = next;
    }
    rep(i, N) { cout << M[A.at(i)] << ' '; }
}
