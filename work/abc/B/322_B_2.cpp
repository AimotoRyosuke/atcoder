#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;
    string t_pre = T.substr(0, S.size());
    string t_suf = T.substr(T.size() - S.size(), T.size());
    int ans;
    if (t_pre == S && t_suf == S)
        ans = 0;
    else if (t_pre == S)
        ans = 1;
    else if (t_suf == S)
        ans = 2;
    else
        ans = 3;
    cout << ans << endl;
}
