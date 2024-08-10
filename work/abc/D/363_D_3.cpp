#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

int main() {
    ull N;
    cin >> N;

    auto get_palindromic_num = [&]() -> string {
        if (N <= 10) {
            return to_string(N - 1);
        }
        ull num = 10;
        int digit = 1;
        while (num < N) {
            digit++;
            num += 9 * (ull)pow(10, (digit + 1) / 2 - 1);
        }
        num -= 9 * (ull)pow(10, (digit + 1) / 2 - 1);
        ull first = pow(10, (digit + 1) / 2 - 1);
        ull rmi = N - num;
        string l = to_string(first - 1 + rmi);
        string r = l;
        reverse(r.begin(), r.end());
        if (digit % 2 == 1)
            l = l.substr(0, l.size() - 1);
        return l + r;
    };
    cout << get_palindromic_num() << '\n';
}
