#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, T, P;
    cin >> N >> T >> P;
    vector<int> L(N);
    for (auto &l : L)
        cin >> l;
    sort(L.rbegin(), L.rend());
    int l = L.at(P - 1);
    if (T > l)

        cout << T - l << '\n';
    else
        cout << 0 << '\n';
}
