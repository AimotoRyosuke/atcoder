#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

string findNthPalindromicNumber(ull N) {
    if (N < 10) {
        return to_string(N - 1);
    }
    ull num = 10;
    int digit = 1;
    ull rate = 1;
    while (num < N) {
        digit++;
        if (digit % 2) {
            rate *= 10;
        }
        num += 9 * rate;
    }
    ull left = (ull)pow(10, (digit + 1) / 2 - 1) - 1 + (N - (num - 9 * rate));
    string ls = to_string(left);
    string rs = string(ls.rbegin(), ls.rend());
    if (digit % 2)
        ls.pop_back();
    return ls + rs;
}

int main() {
    ull N;
    cin >> N;
    cout << findNthPalindromicNumber(N) << '\n';
}
