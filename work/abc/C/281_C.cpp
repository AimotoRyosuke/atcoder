#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N, T;
    cin >> N >> T;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    ll sum = accumulate(A.begin(), A.end(), 0LL);
    ll t = T % sum;
    int num, sec;
    rep(i, N) {
        auto a = A.at(i);
        t -= a;
        if (t < 0) {
            num = i + 1;
            sec = a + t;
            break;
        }
    }
    cout << num << ' ' << sec << '\n';
}
