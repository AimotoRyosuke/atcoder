#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    ull sum = accumulate(A.begin(), A.end(), 0ULL);
    int avg = sum / N;
    ull upper = 0, lower = 0;
    rep(i, N) {
        int a = A.at(i);
        if (a > avg + 1) {
            upper += a - (avg + 1);
        } else if (a < avg) {
            lower += avg - a;
        }
    }
    cout << max(lower, upper) << '\n';
}
