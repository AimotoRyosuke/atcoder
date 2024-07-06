#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, K, X;
    cin >> N >> K >> X;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    rep(i, N) {
        cout << A.at(i) << " ";
        if (i + 1 == K)
            cout << X << " ";
    }
}
