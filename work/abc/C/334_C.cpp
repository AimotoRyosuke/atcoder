// 復習する
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(K);
    for (auto &a : A)
        cin >> a;
    vector<int> pre(K + 1), suf(K + 1);
    for (int i = 1; i <= K; i++) {
        pre.at(i) = pre.at(i - 1);
        if (i % 2 == 0)
            pre.at(i) += A.at(i - 1) - A.at(i - 2);
    }
    for (int i = K - 1; i >= 0; i--) {
        suf.at(i) = suf.at(i + 1);
        if ((K - i) % 2 == 0)
            suf.at(i) += A.at(i + 1) - A.at(i);
    }
    int ans = 1e9;
    for (int i = 0; i <= K; i += 2) {
        ans = min(ans, pre.at(i) + suf.at(i));
    }
    cout << ans << endl;
}
