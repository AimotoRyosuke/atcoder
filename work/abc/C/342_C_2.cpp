#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N;
    string S;
    cin >> S;
    cin >> Q;
    map<char, char> cvt_map;
    rep(i, 26) cvt_map['a' + i] = 'a' + i;

    rep(i, Q) {
        char c, d;
        cin >> c >> d;
        rep(j, 26) {
            char key = 'a' + j;
            if (cvt_map[key] == c)
                cvt_map[key] = d;
        }
    }
    rep(i, S.size()) cout << cvt_map[S.at(i)];
}
