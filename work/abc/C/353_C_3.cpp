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
    ll a_sum = accumulate(A.begin(), A.end(), 0LL) * (N - 1);
    sort(A.begin(), A.end());
    ll cnt = 0;
    int l = 0, r = N - 1;
    int rate = 1;
    int B = pow(10, 8);
    while (l != r) {
        if (A.at(l) + A.at(r) >= B) {
            cnt += rate;
            if (A.at(l) + A.at(r - 1) >= B) {
                r--, rate++;
            } else {
                l++;
            }
        } else {
            l++;
        }
    }
    cout << a_sum - (ll)B * cnt << '\n';
}
