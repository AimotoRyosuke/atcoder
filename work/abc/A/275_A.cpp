#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M = 0, iM = 0;
    cin >> N;
    rep(i, N) {
        int a;
        cin >> a;
        if (a > M) {
            M = a;
            iM = i + 1;
        }
    }
    cout << iM << '\n';
}
