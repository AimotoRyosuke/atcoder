#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    bool out = true;
    rep(i, N) {
        char c = s.at(i);
        if (c == '"')
            out = !out;
        if (c == ',' && out)
            s.at(i) = '.';
    }
    cout << s << '\n';
}
