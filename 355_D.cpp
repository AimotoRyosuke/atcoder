#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<int> L(N), R(N);
    for (int i = 0; i < N; i++) {
        cin >> L.at(i) >> R.at(i);
    }
    sort(L.begin(), L.end());
    sort(R.begin(), R.end());
    ull count = (ull)N * (N - 1) / 2;
    int r_i = 0;
    for (int i = 0; i < N; i++) {
        int l = L.at(i);
        while (R.at(r_i) < l) {
            r_i++;
        }
        count -= r_i;
    }
    cout << count << endl;
}
