#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string ans;
    for (int i = 0; i < (int)S.size(); i++) {
        char s = S.at(S.size() - 1 - i);
        if (s == '.')
            break;
        ans += s;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
