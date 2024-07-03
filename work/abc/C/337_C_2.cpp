#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    map<int, int> A;
    rep(i, N) {
        int a;
        cin >> a;
        A[a] = i;
    }
    cout << A[-1] + 1 << " ";
    int before = -1;
    rep(i, N - 1) {
        cout << A[A[before] + 1] + 1 << " ";
        before = A[before] + 1;
    }
}
