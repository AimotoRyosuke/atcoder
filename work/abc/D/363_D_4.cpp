#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

string get_palindrome(ull n) {
    if (n == 1)
        return "0";
    ull cnt = 1;
    ull digit = 0;
    while (cnt < n) {
        digit++;
        cnt += 9 * (ull)pow(10, (digit - 1) / 2);
    }
    cnt -= 9 * (ull)pow(10, (digit - 1) / 2);
    ull cur = (ull)pow(10, (digit - 1) / 2);
    ull l = cur + n - cnt - 1;
    string ls = to_string(l);
    string rs = ls;
    reverse(rs.begin(), rs.end());
    if (digit % 2)
        ls = ls.substr(0, ls.size() - 1);
    return ls + rs;
}

int main() {
    ull N;
    cin >> N;
    cout << get_palindrome(N) << '\n';
}
