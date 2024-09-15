#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    set<int> st;
    rep(i, M) {
        int a;
        char b;
        cin >> a >> b;
        if (st.count(a) || b == 'F') {
            cout << "No" << '\n';
            continue;
        }
        st.insert(a);
        cout << "Yes" << '\n';
    }
}
