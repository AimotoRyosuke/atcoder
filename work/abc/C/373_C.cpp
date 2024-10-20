#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> B(N);
    for (auto &a : B)
        cin >> a;
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    cout << A.at(0) + B.at(0) << '\n';
}
