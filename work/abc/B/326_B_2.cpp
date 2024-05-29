#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = N; i <= 919; i++) {
        int ones = i % 10;
        int tens = (i % 100 - ones) / 10;
        int hundreds = (i - tens - ones) / 100;
        if (tens * hundreds == ones) {
            cout << i << endl;
            return 0;
        }
    }
}
