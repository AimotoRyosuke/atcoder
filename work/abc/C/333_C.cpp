#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

ull calculate(int x) {
    string num_s = "";
    for (int i = 0; i < x; i++) {
        num_s += "1";
    }
    ull value = 0;
    ull before = 1;
    for (int i = 0; i < (int)num_s.size(); i++) {
        value += before;
        before *= 10;
    }
    return value;
}

int main() {
    int N;
    cin >> N;
    int a = 1, b = 1, c = 0, count = 0;
    while (count < N) {
        count++;
        if (a == b && a == c) {
            a++;
            b = 1;
            c = 1;
        } else if (b > c)
            c++;
        else if (a > b) {
            b++;
            c = 1;
        }
    }
    ull ans = calculate(a) + calculate(b) + calculate(c);
    cout << ans << endl;
}
