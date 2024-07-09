#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    int f = 0, a = 0;
    rep(i, N) {
        string s;
        cin >> s;
        if (s == "For")
            f++;
        else
            a++;
    }
    cout << (f > a ? "Yes" : "No") << '\n';
}
