#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    bool ok = false;
    rep(i, 8) rep(j, 8) {
        if (x1 + dx[i] == x2 + dx[j] && y1 + dy[i] == y2 + dy[j])
            ok = true;
    }
    cout << (ok ? "Yes" : "No") << '\n';
}
