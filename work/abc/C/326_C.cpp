#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    int cnt = 0, r = 0;
    sort(A.begin(), A.end());
    for (int l = 0; l < N; l++) {
        int num = 0;
        while (r < N && A.at(r) - A.at(l) <= M - 1) {
            r++;
        }
        cnt = max(cnt, r - l);
    }
    cout << cnt << endl;
}
