// 総数が決まったfor文

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;
    vector<int> values(3);

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            int k = n - i - j;

            if (10000 * i + 5000 * j + 1000 * k == y) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}

// ver. 1
// int main() {
//     int n, y;
//     cin >> n >> y;
//     vector<int> values(3);

//     for (int i = 0; i < n + 1; i++) {
//         for (int j = 0; j < n + 1; j++) {
//             if (i + j > n)
//                 break;
//             for (int k = 0; k < n + 1; k++) {
//                 if (i + j + k != n) {
//                     continue;
//                 }
//                 if (10000 * i + 5000 * j + 1000 * k == y) {
//                     cout << i << " " << j << " " << k << endl;
//                     return 0;
//                 }
//                 break;
//             }
//         }
//     }
//     cout << "-1 -1 -1" << endl;
// }
