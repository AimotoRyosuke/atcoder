#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N, D, P;
    cin >> N >> D >> P;
    vector<int> F(N);
    for (auto &f : F)
        cin >> f;
    sort(F.rbegin(), F.rend());

    int cnt = 0;
    ull value = 0, ans = 0;
    for (int i = 0; i < N; i++) {
        cnt++;
        value += F.at(i);
        if (cnt == D || i == N - 1) {
            if (value > P) {
                ans += P;
            } else {
                ans += value;
            }
            value = 0;
            cnt = 0;
        }
    }
    cout << ans << endl;
}
