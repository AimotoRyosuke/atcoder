#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int A, B;
    cin >> A >> B;
    int q1 = 0, q2 = 0, q3 = 0;
    if (A % 2 || B % 2)
        q1 = 1;
    A -= A % 2, B -= B % 2;
    if (A % 4 || B % 4)
        q2 = 2;
    if (A / 4 || B / 4)
        q3 = 4;
    cout << q1 + q2 + q3 << '\n';
}
