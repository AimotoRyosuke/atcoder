#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    int cur = N.at(0) - '0';
    for (int i = 1; i < (int)N.size(); i++) {
        int num = N.at(i) - '0';
        if (cur > num)
            cur = num;
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
