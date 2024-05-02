#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int answer = 0;
    for (int i = n; i <= 919; i++) {
        string i_str = to_string(i);
        int c_100 = i_str.at(0) - '0';
        int c_10 = i_str.at(1) - '0';
        int c_1 = i_str.at(2) - '0';
        if (c_100 * c_10 != c_1) {
            continue;
        }
        answer = i;
        break;
    }
    cout << answer << endl;
}
