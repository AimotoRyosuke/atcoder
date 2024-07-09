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
        d %= W;
    }
    sort(D.begin(), D.end());
    rep(i, N) D.push_back(D.at(i) + W);
    bool ok = false;
    rep(i, N * 2 - 1) {
        if (D.at(i + 1) - D.at(i) > B) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
