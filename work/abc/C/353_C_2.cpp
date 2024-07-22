#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int MOD = 100000000;

int main() {
    ull N;
    cin >> N;
    ull sum = 0, cnt = 0;
    vector<int> A(N);
    for (auto &a : A) {
        cin >> a;
        sum += a;
    }
    sort(A.begin(), A.end());
    int r = N - 1;
    rep(i, N) {
        while (r > i && r < N && (A.at(r) + A.at(i) >= MOD)) {
            r--;
        }
        if (N != r)
            cnt += N - 1 - r;
        r = max(r, i + 2);
    }
    sum *= N - 1;
    sum -= MOD * cnt;
    cout << sum << '\n';
}
