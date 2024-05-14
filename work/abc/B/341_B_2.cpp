#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<ull> A(N);
    for (auto &a : A)
        cin >> a;

    for (int i = 0; i < N - 1; i++) {
        int t, s;
        cin >> t >> s;
        A.at(i + 1) += A.at(i) / t * s;
    }
    cout << A.at(A.size() - 1) << endl;
}
