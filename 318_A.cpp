#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;
    int cnt = 0;
    if (N > M) {
        cnt++;
        N -= M;
    }
    cnt += N / P;
    cout << cnt << endl;
}
