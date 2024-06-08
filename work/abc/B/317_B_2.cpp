#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    sort(A.begin(), A.end());
    for (int i = 1; i < N; i++) {
        if (A.at(i) != A.at(i - 1) + 1) {
            cout << A.at(i - 1) + 1 << endl;
            return 0;
        }
    }
}
