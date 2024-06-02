#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (auto &a : A)
        cin >> a;
    int l = 0;
    for (int i = 0; i < N; i++) {
        while (i + 1 > A.at(l)) {
            l++;
        }
        cout << A.at(l) - (i + 1) << endl;
    }
}
