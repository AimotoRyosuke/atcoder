#include <bits/stdc++.h>
using namespace std;

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
