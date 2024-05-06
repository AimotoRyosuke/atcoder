#include <bits/stdc++.h>
using namespace std;

int main() {
    int a_score = 0, b_score = 0;
    for (int i = 0; i < 9; i++) {
        int a;
        cin >> a;
        a_score += a;
    }
    for (int i = 0; i < 8; i++) {
        int b;
        cin >> b;
        b_score += b;
    }
    if (a_score < b_score) {
        cout << 0 << endl;
    } else {
        cout << a_score - b_score + 1 << endl;
    }
}
