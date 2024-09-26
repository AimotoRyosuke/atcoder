#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    for (auto &r : R)
        cin >> r;
    auto f = [&](auto f, vector<int> a) -> void {
        if (a.size() == N) {
            int sum = accumulate(a.begin(), a.end(), 0);
            if (sum % K == 0) {
                rep(i, N) cout << a[i] << ' ';
                cout << '\n';
            }
            return;
        }
        int ri = a.size();
        for (int i = 1; i < R[ri]; i++) {
            auto na = a;
            na.push_back(i);
            f(f, na);
        }
    };
    f(f, vector<int>(0));
}
