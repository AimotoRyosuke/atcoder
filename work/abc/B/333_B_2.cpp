#include <bits/stdc++.h>
using namespace std;

int main() {
    char S1, S2, T1, T2;
    cin >> S1 >> S2 >> T1 >> T2;
    int diff_s = abs(S1 - S2);
    int diff_t = abs(T1 - T2);

    int length_s = 0;
    switch (diff_s) {
    case 1:
    case 4:
        length_s = 1;
        break;
    case 2:
    case 3:
        length_s = 2;
        break;
    }
    int length_t = 0;
    switch (diff_t) {
    case 1:
    case 4:
        length_t = 1;
        break;
    case 2:
    case 3:
        length_t = 2;
        break;
    }
    cout << (length_s == length_t ? "Yes" : "No") << endl;
}
