#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

bool get_is_palindrome(string s) {
    string temp = s;
    reverse(s.begin(), s.end());
    return s == temp;
}

int main() {
    ull N;
    cin >> N;
    ull ans = 0;
    for (ull i = 1; i * i * i <= N; i++) {
        if (get_is_palindrome(to_string(i * i * i)))
            ans = i * i * i;
    }
    cout << ans << endl;
}
