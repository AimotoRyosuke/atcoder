#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);
    for (int i = 0; i < n - 1; i++) {
        int s, t;
        cin >> s >> t;
        long long loss = (a.at(i) / s) * s;
        long long gain = loss / s * t;

        a.at(i) -= loss;
        a.at(i + 1) += gain;
    }
    cout << a.at(n - 1) << endl;
}
