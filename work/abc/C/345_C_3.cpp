#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

ull c2(ull v) { return v * (v - 1) / 2; }

int main() {
    string S;
    cin >> S;
    ull total = c2(S.size());
    map<int, int> cnt_map;
    rep(i, S.size()) cnt_map[S.at(i)]++;
    bool dup = false;
    for (auto [k, cnt] : cnt_map) {
        if (cnt > 1)
            dup = true;
        total -= c2(cnt);
    }
    if (dup)
        total++;

    cout << total << '\n';
}
