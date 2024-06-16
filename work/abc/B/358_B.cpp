#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    vector<int> T(N);
    for (auto &t : T) {
        cin >> t;
    }
    cout << T.at(0) + A << endl;
    int loss = 0;
    for (int i = 1; i < N; i++) {
        int bfr = T.at(i - 1);
        int crr = T.at(i);
        if (crr - loss > bfr + A) {
            cout << crr + A << endl;
            loss = 0;
        } else {
            cout << crr + A + (bfr + A - crr) + loss << endl;
            loss += bfr + A - crr;
        }
    }
}
