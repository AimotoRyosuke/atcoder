#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    map<int, int> M;
    rep(i, N) {
        int num;
        cin >> num;
        int x, c;
        if (num == 1) {
            cin >> x;
            M[x]++;
        } else if (num == 2) {
            cin >> x >> c;
            M[x] -= min(c, M[x]);
            if (M[x] == 0)
                M.erase(x);
        } else if (num == 3) {
            cout << M.rbegin()->first - M.begin()->first << '\n';
        }
    }
}
