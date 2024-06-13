#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> all;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        all.push_back(a);
    }
    for (int i = 0; i < M; i++) {
        int b;
        cin >> b;
        all.push_back(++b);
    }

    sort(all.begin(), all.end());

    cout << all.at(M - 1) << endl;
}

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<int> A(N);
//     for (auto &a : A)
//         cin >> a;
//     vector<int> B(M);
//     for (auto &b : B)
//         cin >> b;
//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end());

//     int bi = -1, ai = -1, ans = 0;
//     for (int i = 0; i < 10e9; i++) {
//         while (ai < N - 1 && A.at(ai + 1) <= i)
//             ai++;
//         while (bi < M - 1 && B.at(bi + 1) < i)
//             bi++;
//         if (ai + 1 >= M - bi - 1) {
//             ans = i;
//             break;
//         }
//     }
//     cout << ans << endl;
// }
