#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int N = s.size();
    int cnt = 0;
    rep(i, N) {
        char c = s.at(N - 1 - i);
        cnt++;
        if (c == '0' && i != N - 1 && s.at(N - 1 - i - 1) == '0')
            i++;
    }
    cout << cnt << '\n';
}
