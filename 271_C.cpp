#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    sort(A.begin(), A.end());
    int dup = 0;
    rep(i, N) {
        if (i == 0)
            continue;
        if (A.at(i) == A.at(i - 1))
            dup++;
    }
    A.erase(unique(A.begin(), A.end()), A.end());

    auto check = [&](int tgt) -> bool {
        int num = 0;
        int sz = A.size();
        rep(i, sz) {
            if (A.at(i) <= tgt)
                num++;
        }
        return num + (dup + sz - num) / 2 >= tgt;
    };

    int ac = 0, wa = N + 1;
    while (ac + 1 < wa) {
        int tgt = (ac + wa) / 2;
        if (check(tgt))
            ac = tgt;
        else
            wa = tgt;
    }
    cout << ac << '\n';
}

// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (auto &a : A)
//         cin >> a;
//     unordered_set<int> S;
//     rep(i, N) S.insert(A.at(i));

//     int cost = 0, ans = 0;
//     for (int i = 1;; i++) {
//         if (S.count(i))
//             cost++;
//         else
//             cost += 2;
//         if (cost > N)
//             break;
//         ans = i;
//     }
//     cout << ans << '\n';
// }
