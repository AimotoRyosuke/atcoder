#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<vector<int>> AB(N, vector<int>(2));
    ull sum = 0;
    for (auto &ab : AB) {
        cin >> ab.at(0) >> ab.at(1);
        sum += ab.at(1);
    }
    sort(AB.begin(), AB.end(),
         [](const auto &a, const auto &b) { return a[0] < b[0]; });

    ull cnt = sum;
    int day = 1;
    for (int i = 0; i < N; i++) {
        auto ab = AB.at(i);
        if (i == 0 && cnt <= K) {
            day = 1;
            break;
        }
        cnt -= ab.at(1);
        if (cnt <= K) {
            day = ab.at(0) + 1;
            break;
        }
    }
    cout << day << endl;
}

// int main() {
//     int N, K;
//     cin >> N >> K;
//     map<int, ull> AB;
//     ull sum = 0;
//     for (int i = 0; i < N; i++) {
//         int a, b;
//         cin >> a >> b;
//         AB[a] += b;
//         sum += b;
//     }

//     ull cnt = sum;
//     int day = 1;
//     while (cnt > K) {
//         if (day % 1000000 == 0)
//             cout << cnt << endl;
//         cnt -= AB[day];
//         day++;
//     }
//     cout << day << endl;
// }
