#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L, R;
    cin >> N >> L >> R;
    for (int i = 0; i < N; i++) {
        if (i >= L - 1 && i <= R - 1) {
            cout << R - i + L - 1 << " ";
        } else {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}
