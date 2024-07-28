#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    int K;
    cin >> K;
    vector<int> ans;
    rep(s, 1 << 10) {
        ull x = 0;
        for (int i = 9; i >= 0; i--) {
            if (s >> i & 1) {
                x = x * 10 + i;
            }
        }
        if (x == 0)
            continue;
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    cout << ans[K - 1] << '\n';
}

// int main() {
//     int K;
//     cin >> K;
//     vector<ull> a;
//     rep(s, 1 << 10) {
//         ull x = 0;
//         cout << "s: " << s << '\n';
//         for (int i = 9; i >= 0; i--) {
//             if (s >> i & 1) {
//                 x = x * 10 + i;
//             }
//             cout << x << '\n';
//         }
//         if (x == 0)
//             continue;
//         a.push_back(x);
//     }
//     // sort(a.begin(), a.end());
//     // cout << a.at(K - 1) << '\n';
// }
