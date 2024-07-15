#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    ull tot = 0;
    for (auto &a : A) {
        cin >> a;
        tot += (ull)a;
    }
    ull avg = tot / N;
    ull upper = 0, lower = 0;
    rep(i, N) {
        int a = A.at(i);
        if (a < avg)
            lower += avg - a;
        else if (a > avg + 1) {
            upper += a - (avg + 1);
        }
    }
    cout << max(lower, upper) << '\n';
}
