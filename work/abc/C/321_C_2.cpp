#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    int K;
    cin >> K;
    vector<ull> a;
    rep(s, 1 << 10) {
        ull x = 0;
        for (int i = 9; i >= 0; i--) {
            if (s >> i & 1) {
                x = x * 10 + i;
            }
        }
        if (x == 0)
            // 0だけ使う時と、全て使わない場合を排除
            continue;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cout << a[K - 1] << '\n';
}
