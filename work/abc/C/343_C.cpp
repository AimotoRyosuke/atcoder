// 回文判定
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

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
    ull N;
    cin >> N;
    ull x = 0;
    ull ans = 0;
    while (x * x * x <= N) {
        if (get_is_palindrome(to_string(x * x * x)))
            ans = x * x * x;
        x++;
    }
    cout << ans << endl;
}
