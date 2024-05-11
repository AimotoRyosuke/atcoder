#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    for (int i = 0; i < N - 1; i++) {
        cout << A.at(i) * A.at(i + 1) << " ";
    }
    cout << endl;
}
