#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int multi2(int k) {
    if (k == 0)
        return 1;
    return k * multi2(k - 1);
}

int main() {
    int N;
    cin >> N;

    cout << multi2(N) << '\n';
}
