#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

// 2~9進数に変換可能
ull convertBaseNumber(int convert_base, ull decimal) {
    ull quotient = decimal;
    string str;
    while (quotient > 0) {
        str += to_string(quotient % convert_base);
        quotient /= convert_base;
    }
    ull value = 0;
    ull base = 1;
    for (int i = 0; i < (int)str.size(); i++) {
        value += (str.at(i) - '0') * base;
        base *= 10;
    }
    return value;
}

int main() {
    ull N;
    cin >> N;
    int count = 0;
    string N_str = to_string(N);
    ull N_5 = convertBaseNumber(5, N - 1);
    cout << N_5 * 2 << endl;
}
