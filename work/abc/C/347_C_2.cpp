// 復習する
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int W = A + B;
    vector<int> D(N);
    for (auto &d : D) {
        cin >> d;
        d = d % W;
    }
    sort(D.begin(), D.end());
    rep(i, N) D.push_back(D.at(i) + W);
    bool ok = false;
    rep(i, D.size() - 1) {
        if ((D[i + 1] - D[i] >= B + 1)) {
            ok = true;
            break;
        }
    }
    // rep(i, N) {
    //     int l = D.at(i), r = D.at(i + N - 1);
    //     if (r - l + 1 <= A) {
    //         ok = true;
    //         break;
    //     }
    // }
    cout << (ok ? "Yes" : "No") << endl;
}
