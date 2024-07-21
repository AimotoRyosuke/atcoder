
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool get_is_palindrome(string s) {
    int s_size = s.size();
    for (int i = 0; i < s_size + s_size % 2 / 2; i++) {
        if (s.at(i) != s.at(s_size - 1 - i)) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    sort(S.begin(), S.end());
    int ans = 0;
    do {
        bool ok = true;
        rep(i, N - K + 1) {
            if (get_is_palindrome(S.substr(i, K))) {
                ok = false;
                break;
            }
        }
        if (ok)
            ans++;
    } while (next_permutation(S.begin(), S.end()));
    cout << ans << '\n';
}
