#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> D(N);
    int m = 1e5;
    for (auto &d : D) {
        cin >> d;
        m = min(m, d);
    }
    cout << min(P, Q + m) << endl;
}
