#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    bool ok = true;
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
        if (i == 0)
            continue;
        if (A.at(i) != A.at(i - 1))
            ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
