#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> am = {1};
    map<int, int> M;
    rep(i, N) {
        auto &a = A.at(i);
        cin >> a;
        am.push_back((i + 1) * 2);
        am.push_back((i + 1) * 2 + 1);
        M[(i + 1) * 2] = a;
        M[(i + 1) * 2 + 1] = a;
    }

    map<int, int> cache;

    auto get_cnt = [&](auto get_cnt, int num) {
        if (num == 1) {
            return 0;
        }
        if (cache[num]) {
            return cache[num];
        }
        cache[num] = 1 + get_cnt(get_cnt, M[num]);
        return cache[num];
    };

    rep(i, N * 2 + 1) { cout << get_cnt(get_cnt, am.at(i)) << '\n'; }
}
