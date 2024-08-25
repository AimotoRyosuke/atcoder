#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;
    ll t = 0;
    rep(i, N) {
        t += A.at(i) / 5 * 3;
        A.at(i) = A.at(i) % 5;
        while (A.at(i) > 0) {
            t++;
            if (t % 3)
                A.at(i)--;
            else
                A.at(i) -= 3;
        }
    }
    cout << t << '\n';
}
