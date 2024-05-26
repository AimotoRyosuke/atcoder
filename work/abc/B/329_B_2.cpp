#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int M = 0, m = 0;
    vector<int> A(N);
    for (auto &a : A) {
        cin >> a;
        if (a > M) {
            m = M;
            M = a;
        }
        if (M != a)
            m = max(m, a);
    }
    cout << m << endl;
}
