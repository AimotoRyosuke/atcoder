#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    int mx = N * 2 + 1;
    unordered_set<int> st;
    while (true) {
        if (st.count(0))
            break;
        for (int i = 1; i <= mx; i++) {
            if (!st.count(i)) {
                cout << i << '\n';
                st.insert(i);
                break;
            }
        }
        int x;
        cin >> x;
        st.insert(x);
    }
}
