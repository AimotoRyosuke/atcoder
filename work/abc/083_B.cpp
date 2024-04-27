#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int total = 0;
    for (int i = 1; i < n + 1; i++) {
        string i_str = to_string(i);
        int sum = 0;
        for (int j = 0; j < i_str.size(); j++) {
            sum += i_str.at(j) - '0';
        }
        if (a <= sum && b >= sum) {
            total += i;
        }
    }
    cout << total << endl;
}
