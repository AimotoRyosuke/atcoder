#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

vector<ull> R = {1,         11,         111,         1111,
                 11111,     111111,     1111111,     11111111,
                 111111111, 1111111111, 11111111111, 111111111111};
int len = R.size();

int main() {
    int N;
    cin >> N;
    vector<ull> P;
    rep(i, len) rep(j, len) rep(k, len) P.push_back(R[i] + R[j] + R[k]);
    sort(P.begin(), P.end());
    P.erase(unique(P.begin(), P.end()), P.end());
    cout << P[N - 1] << '\n';
}
