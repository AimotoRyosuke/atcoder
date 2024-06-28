#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    map<int, int> mins;
    for (int i = 0; i < N; i++) {
        int a, c;
        cin >> a >> c;
        if (mins.count(c) == 0)
            mins[c] = a;
        else
            mins[c] = min(mins[c], a);
    }
    int minmax = 0;
    for (auto &[c, a] : mins)
        minmax = max(minmax, a);
    cout << minmax << endl;
}
