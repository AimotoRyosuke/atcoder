#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    ull N, M;
    cin >> N >> M;
    ull cur = N;
    int cnt = 1;
    while (cur <= M / 2) {
        cnt++;
        cur *= 2;
    }
    cout << cnt << '\n';
}
