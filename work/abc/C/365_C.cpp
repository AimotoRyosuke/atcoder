#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    ull N, M;
    cin >> N >> M;
    vector<ull> A(N);
    for (auto &a : A)
        cin >> a;

    auto f = [&](ull x) -> bool {
        ull s = 0;
        rep(i, N) s += min(A.at(i), x);
        return s <= M;
    };

    const int INF = 1001001001;
    if (f(INF))
        cout << "infinite" << '\n';
    else {
        int ac = 0, wa = INF;
        while (ac + 1 < wa) {
            // ac,waが隣り合う（ac+1==wa）になるまで続ける
            int wj = (ac + wa) / 2;
            if (f(wj))
                ac = wj;
            else
                wa = wj;
        }
        cout << ac << '\n';
    }
}

// 正解だが効率は少し悪い
// int main() {
//     ull N, M;
//     cin >> N >> M;
//     vector<int> A(N);
//     for (auto &a : A)
//         cin >> a;
//     ull sum = accumulate(A.begin(), A.end(), 0LL);
//     bool canInfinite = sum <= M;
//     if (canInfinite) {
//         cout << "infinite" << '\n';
//         return 0;
//     }
//     sort(A.begin(), A.end());
//     ull avg = M / N;
//     ull b = 0;
//     rep(i, N) {
//         b += A.at(i);
//         if (b + (N - i - 1) * A.at(i) == M) {
//             cout << A.at(i) << '\n';
//             return 0;
//         } else if (b + (N - i - 1) * A.at(i) > M) {
//             b -= A.at(i);
//             i--;
//             cout << (M - b) / (N - i - 1) << '\n';
//             return 0;
//         }
//     }
// }
