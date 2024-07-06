#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    sort(A.begin(), A.end());
    int ans = 1000000000;
    rep(i, K + 1) { ans = min(ans, A.at(i + N - K - 1) - A.at(i)); }
    cout << ans << endl;
}

// int main() {
//     int N, K;
//     cin >> N >> K;
//     vector<int> A(N);
//     for (auto &a : A)
//         cin >> a;
//     sort(A.begin(), A.end());
//     int l = 0, r = A.size() - 1;
//     rep(i, K) {
//         if (A.at(l + 1) - A.at(l) >= A.at(r) - A.at(r - 1)) {
//             l++;
//         } else {
//             r--;
//         }
//         if (r - l <= 1)
//             break;
//     }
//     cout << A[r] - A[l] << endl;
// }
