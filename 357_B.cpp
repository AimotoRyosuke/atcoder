#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int lower = 0, upper = 0;
    for (auto c : S) {
        if (islower(c))
            lower++;
        else
            upper++;
    }
    if (lower > upper) {
        transform(S.begin(), S.end(), S.begin(), ::tolower);
    } else {
        transform(S.begin(), S.end(), S.begin(), ::toupper);
    }
    for (auto c : S) {
        cout << c;
    }
    cout << endl;
}
