#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<pair<ll, int>> A(N);
    rep(i, N) {
        A.at(i).second = i;
        cin >> A.at(i).first;
    }
    sort(A.rbegin(), A.rend());
    ll sum = 0, c = 0;
    vector<ll> ans(N);
    int tgt = A.at(0).first;
    rep(i, N) {
        if (tgt != A.at(i).first) {
            c = sum;
            tgt = A.at(i).first;
        }
        ans.at(A.at(i).second) = c;
        sum += A.at(i).first;
    }
    rep(i, N) cout << ans.at(i) << ' ';
}
