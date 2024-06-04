#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    cin >> M;
    string S1, S2, S3;
    cin >> S1 >> S2 >> S3;
    int ans = 301;
    for (int i = 0; i < M * 3; i++) {
        for (int j = 0; j < M * 3; j++) {
            for (int k = 0; k < M * 3; k++) {
                if (i == j)
                    continue;
                if (i == k)
                    continue;
                if (j == k)
                    continue;
                if (S1.at(i % M) != S2.at(j % M))
                    continue;
                if (S1.at(i % M) != S3.at(k % M))
                    continue;
                ans = min(ans, max(i, max(j, k)));
            }
        }
    }
    if (ans == 301)
        ans = -1;
    cout << ans << endl;
}

// WA 17/26
// int main() {
//     int M;
//     cin >> M;
//     string s1, s2, s3;
//     cin >> s1 >> s2 >> s3;
//     vector<int> s1_int(10, -1), s2_int(10, -1), s3_int(10, -1);
//     for (int i = 0; i < M * 3; i++) {
//         int idx = i % M;
//         if (s3_int.at(s3.at(idx) - '0') == -1 &&
//             !(s3.at(idx) == s2.at(idx) && s2_int.at(s2.at(idx) - '0') == -1)
//             &&
//             !(s3.at(idx) == s1.at(idx) && s1_int.at(s1.at(idx) - '0') == -1))
//             s3_int.at(s3.at(idx) - '0') = i;
//         if (s2_int.at(s2.at(idx) - '0') == -1 &&
//             !(s2.at(idx) == s1.at(idx) && s1_int.at(s1.at(idx) - '0') == -1))
//             s2_int.at(s2.at(idx) - '0') = i;
//         if (s1_int.at(s1.at(idx) - '0') == -1)
//             s1_int.at(s1.at(idx) - '0') = i;
//     }
//     int m = 101;
//     for (int i = 0; i < 10; i++) {
//         int i1 = s1_int.at(i), i2 = s2_int.at(i), i3 = s3_int.at(i);
//         if (i1 != -1 && i2 != -1 && i3 != -1) {
//             m = min(m, max(i1, max(i2, i3)));
//         }
//     }
//     if (m == 101)
//         m = -1;
//     cout << m << endl;
// }
