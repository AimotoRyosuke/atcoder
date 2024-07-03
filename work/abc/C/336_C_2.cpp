// 復習する
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = long long;

int main() {
    ull N;
    cin >> N;
    vector<int> n5;
    ull next = N - 1;
    int i = 0;
    for (int i = 0;; i++) {
        n5.push_back(next % 5);
        next = next / 5;
        if (next == 0) {
            break;
        }
    }
    ull ans = 0;
    rep(i, n5.size()) { ans += (ull)n5.at(i) * (ull)pow(10, i); }
    cout << ans * 2 << endl;
}
