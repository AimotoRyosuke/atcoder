#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    map<int, int> A;
    rep(i, N) {
        int a;
        cin >> a;
        A[i + 1] = a;
    }
    int ans = 0;
    rep(i, M) {
        int b;
        cin >> b;
        ans += A[b];
    }
    cout << ans << endl;
}
