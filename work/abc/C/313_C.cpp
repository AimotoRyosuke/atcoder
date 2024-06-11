#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    ull sum = 0;
    vector<int> A(N);
    for (auto &a : A) {
        cin >> a;
        sum += a;
    }
    ull avg = sum / N;
    ull diff_lower = 0, diff_upper = 0;
    for (auto &a : A) {
        if (a < avg) {
            diff_lower += avg - a;
        } else if (a > avg + 1)
            diff_upper += a - avg - 1;
    }
    cout << max(diff_upper, diff_lower) << endl;
}
