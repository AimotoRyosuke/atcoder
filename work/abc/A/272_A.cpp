#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    int sum = 0;
    rep(i, N) {
        int a;
        cin >> a;
        sum += a;
    }
    cout << sum << '\n';
}
