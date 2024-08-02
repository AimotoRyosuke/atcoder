#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, T;
    cin >> N >> T;

    vector<int> rows(N), cols(N);
    int dia1 = 0, dia2 = 0;

    int ans = -1;
    rep(ti, T) {
        int a;
        cin >> a;
        if (ans != -1)
            continue;
        a--;
        int i = a / N, j = a % N;
        rows[i]++;
        cols[j]++;
        if (i == j)
            dia1++;
        if ((i + j) == N - 1)
            dia2++;
        if (rows[i] == N || cols[j] == N || dia1 == N || dia2 == N)
            ans = ti + 1;
    }
    cout << ans << '\n';
}
