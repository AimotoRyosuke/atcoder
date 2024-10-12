#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    int cnt = 0;
    rep(i, N - 2) {
        if (s.at(i) == '#' && s.at(i + 1) == '.' && s.at(i + 2)) {
            cnt++;
        }
    }
    cout << cnt << '\n';
}
