// 累乗計算
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

ull multi(int base, int exponent) {
    ull answer = 1;
    for (int i = 0; i < exponent; i++) {
        answer *= base;
    }
    return answer;
}

int main() {
    ull answer = 0;
    for (int i = 0; i < 64; i++) {
        int a;
        cin >> a;
        if (a == 0) {
            continue;
        }
        answer += multi(2, i);
    }
    cout << answer << endl;
}
