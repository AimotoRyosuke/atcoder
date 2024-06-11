#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    int M = 0;
    for (int i = 0; i < N; i++) {
        cin >> P.at(i);
        if (i == 0)
            continue;
        M = max(M, P.at(i));
    }
    int ans = M - P.at(0) + 1;
    if (ans < 0)
        ans = 0;
    cout << ans << endl;
}
