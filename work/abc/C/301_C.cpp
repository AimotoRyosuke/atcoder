#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S, T;
    cin >> S >> T;
    vector<int> SL(27), TL(27);
    rep(i, S.size()) {
        char s = S.at(i), t = T.at(i);
        if (s == '@')
            SL.at(26)++;
        else
            SL.at(s - 'a')++;
        if (t == '@')
            TL.at(26)++;
        else
            TL.at(t - 'a')++;
    }
    int match = 0;
    for (int i = 0; i < 26; i++) {
        char ci = 'a' + i;
        if (!(ci == 'a' || ci == 't' || ci == 'c' || ci == 'o' || ci == 'd' ||
              ci == 'e' || ci == 'r') &&
            SL.at(i) != TL.at(i)) {
            match -= 10000000;
        }
        match += min(SL.at(i), TL.at(i));
    }
    int diff = S.size() - match;
    int at_cnt = SL.at(26) + TL.at(26);
    cout << (at_cnt >= diff ? "Yes" : "No") << endl;
}
