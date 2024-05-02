#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n + 1; i++) {
        bool flag = 0;
        for (int j = 1; j <= 9; j++) {
            if (!(n % j) & !(i % (n / j))) {
                s += to_string(j);
                flag = 1;
                break;
            }
        }
        if (!flag)
            s += "-";
    }
    cout << s << endl;
}
