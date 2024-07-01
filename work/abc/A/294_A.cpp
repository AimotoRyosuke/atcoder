#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    rep(i, N) if (A.at(i) % 2 == 0) cout << A.at(i) << " ";
    cout << endl;
}
