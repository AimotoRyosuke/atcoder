#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    if (N + M == 2 || N + M == 0) {
        cout << "Invalid" << '\n';
    } else {
        cout << (N == 1 ? "Yes" : "No") << '\n';
    }
}
