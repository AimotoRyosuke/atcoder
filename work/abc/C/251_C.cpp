#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    set<string> st;
    int mx = 0, ans = 0;
    rep(i, N) {
        string s;
        int t;
        cin >> s >> t;
        if (!st.count(s)) {
            st.insert(s);
            if (t > mx) {
                mx = t;
                ans = i + 1;
            }
        }
    }
    cout << ans << '\n';
}
