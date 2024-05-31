// 指数、累乗 power, exponent

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

// 指数を求める
ull get_exponent(int base, ull target) {
    ull value = 1, exponent = 0;
    while (value < target) {
        value *= base;
        exponent++;
    }
    return exponent;
}

// 累乗の計算
ull multi(int base, int exponent) {
    ull answer = 1;
    for (int i = 0; i < exponent; i++) {
        answer *= base;
    }
    return answer;
}

int main() {
    ull N;
    cin >> N;

    ull max_expo_2 = get_exponent(2, N);
    ull expo_3 = 0;
    ull value = multi(2, max_expo_2);

    for (int i = 0; i <= max_expo_2; i++) {
        while (N / value > multi(3, expo_3)) {
            expo_3++;
        }
        if (N == value * multi(3, expo_3)) {
            cout << "Yes" << endl;
            return 0;
        }
        value /= 2;
    }
    cout << "No" << endl;
}
