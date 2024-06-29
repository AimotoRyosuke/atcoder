#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

ull c2(ull n) { return n * (n - 1) / 2; }

int main() {
    string S;
    cin >> S;
    int N = S.size();
    map<int, int> cnt;
    rep(i, N) { cnt[S.at(i)]++; }
    ull ans = c2(N);
    bool dup = false;
    for (auto &[key, value] : cnt) {
        if (value > 1)
            dup = true;
        ans -= c2(value);
    }
    if (dup)
        ans++;
    cout << ans << endl;
}
