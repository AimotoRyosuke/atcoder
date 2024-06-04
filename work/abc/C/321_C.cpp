#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

bool check(string s_num) {
    int cur = s_num.at(0) - '0';
    for (int i = 1; i < (int)s_num.size(); i++) {
        int num = s_num.at(i) - '0';
        if (cur > num)
            cur = num;
        else {
            return false;
        }
    }
    return true;
}

ull get_num(int digit) {
    ull value = 1;
    for (int i = 0; i < digit; i++)
        value *= (10 - i);
    for (int i = 0; i < digit; i++)
        value /= i + 1;
    return value;
}

int main() {
    ull N;
    cin >> N;
    int cnt = 0, digit = 0;
    ull ans = 0;
    while (cnt < N + 1) {
        digit++;
        cnt += get_num(digit);
        if (digit == 10) {
            break;
        }
    }
    ull base = 0;
    for (ull i = 0; i < digit; i++) {
        base += (9 - i) * pow(10, digit - 1 - i);
    }
    if (cnt == N) {
        cout << base << endl;
        return 0;
    }
    while (cnt > N) {
        if (check(to_string(base)))
            cnt--;
        if (cnt == N) {
            ans = base;
            break;
        }
        base--;
    }
    cout << ans << endl;
}
