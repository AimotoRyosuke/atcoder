#include <bits/stdc++.h>
using namespace std;

int get_num(char &c) {
    if (c == 'A') {
        return 1;
    } else if (c == 'B') {
        return 2;
    } else if (c == 'C') {
        return 3;
    } else if (c == 'D') {
        return 4;
    } else if (c == 'E') {
        return 5;
    }
}

int get_is_short(int num1, int num2) {
    int diff = abs(num1 - num2);
    return diff == 1 || diff == 4;
}

int main() {
    char s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;
    int s1_num = get_num(s1), s2_num = get_num(s2), t1_num = get_num(t1),
        t2_num = get_num(t2);
    bool is_short_s = get_is_short(s1_num, s2_num);
    bool is_short_t = get_is_short(t1_num, t2_num);
    if (is_short_s == is_short_t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
