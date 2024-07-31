#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    vector<string> a = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    auto it = find(a.begin(), a.end(), s);
    int idx = distance(a.begin(), it);
    cout << 5 - idx << '\n';
}
