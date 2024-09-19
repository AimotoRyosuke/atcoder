#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    set<pair<int, int>> st;
    rep(i, Q) {
        int t, a, b;
        cin >> t >> a >> b;
        a--, b--;
        if (t == 1) {
            st.insert({a, b});
        } else if (t == 2) {
            st.erase({a, b});
        } else {
            bool ok = st.count({a, b}) && st.count({b, a});
            cout << (ok ? "Yes" : "No") << '\n';
        }
    }
}
