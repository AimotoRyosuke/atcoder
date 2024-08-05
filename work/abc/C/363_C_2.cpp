#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool is_palindrome(string s) {
    bool ok = true;
    int size = s.size();
    rep(i, size / 2) {
        if (s.at(i) != s.at(size - 1 - i))
            ok = false;
    }
    return ok;
}

int main() {
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt = 0;
    do {
        bool ok = true;
        rep(i, N - K + 1) {
            if (is_palindrome(s.substr(i, K)))
                ok = false;
        }
        if (ok) {
            cnt++;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << cnt << '\n';
}
