#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string constructPalindrome(ll num, bool odd) {
    if (num == 0)
        return "0";
    string s = to_string(num);
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (odd)
        s.pop_back();
    return s + rev;
}

string findNthPalindrome(ll N) {
    if (N <= 10)
        return to_string(N - 1); // 0-9の処理

    N -= 10; // 0-9の10個の回文数を除外
    ll len = 2;
    ll count = 10;

    while (true) {
        ll palindromes = 9 * pow(10, (len - 1) / 2);
        if (N <= palindromes) {
            ll start = pow(10, (len - 1) / 2);
            start += (N - 1);
            return constructPalindrome(start, len % 2 != 0);
        }
        N -= palindromes;
        len++;
        count += palindromes;
    }
}

int main() {
    ll N;
    cin >> N;
    cout << findNthPalindrome(N) << endl;
    return 0;
}
