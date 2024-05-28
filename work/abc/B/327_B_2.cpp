#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    ull N;
    cin >> N;
    ull base = 1;
    ull value = 1;
    while (N >= value) {
        value = 1;
        for (int i = 0; i < base; i++) {
            value *= base;
        }
        if (value == N) {
            cout << base << endl;
            return 0;
        }
        base++;
    }
    cout << -1 << endl;
}
