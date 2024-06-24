#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N * 2);
    for (auto &a : A)
        cin >> a;
    int cnt = 0;
    for (int i = 1; i < 2 * N - 1; i++) {
        if (A.at(i - 1) == A.at(i + 1))
            cnt++;
    }
    cout << cnt << endl;
}
