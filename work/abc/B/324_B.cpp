#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int get_max_exponent(int num, ll max_num) {
    ll value = 1;
    int i = 0;
    while (value < max_num) {
        value *= num;
        ++i;
    }
    return i;
}

ll multi(int base, int exponent) {
    ll answer = 1;
    for (int i = 0; i < exponent; i++) {
        answer *= base;
    }
    return answer;
}

int main() {
    ll n;
    cin >> n;
    int max_exponent_2 = get_max_exponent(2, n);
    for (int i = 0; i < max_exponent_2 + 1; i++) {
        ll multi2 = multi(2, i);
        if (n % multi2 != 0) {
            continue;
        }
        int max_exponent_3 = get_max_exponent(3, n / multi2);
        ll multi3 = multi(3, max_exponent_3);
        if (n - multi2 * multi3 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
