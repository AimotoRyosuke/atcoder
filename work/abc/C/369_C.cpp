#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int factorial1(int n) {
    int ret = 1;
    while (n > 1)
        ret *= n--;
    return ret;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    ll num = 0;
    rep(i, N - 1) {
        int r = i + 1;
        int diff = A.at(r) - A.at(i);
        while (r != N - 1 && (A.at(r + 1) - A.at(r)) == diff)
            r++;
        num += ll(r - i + 1) * (r - i + 2) / 2;
        if (i != 0)
            num--;
        i = r - 1;
    }
    if (N == 1)
        num = 1;
    cout << num << '\n';
}
