#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    string s;
    cin >> s;
    vector<pair<int, char>> XC(Q);
    rep(i, Q) { cin >> XC.at(i).first >> XC.at(i).second; }
    auto check_ABC = [&](int i) -> bool {
        return i >= 0 && i + 2 < N && s.at(i) == 'A' && s.at(i + 1) == 'B' &&
               s.at(i + 2) == 'C';
    };
    set<int> st;
    rep(i, N - 2) if (check_ABC(i)) st.insert(i);
    rep(i, Q) {
        int x = XC.at(i).first;
        char c = XC.at(i).second;
        x--;
        s.at(x) = c;
        if (check_ABC(x - 2))
            st.insert(x - 2);
        else
            st.erase(x - 2);
        if (check_ABC(x - 1))
            st.insert(x - 1);
        else
            st.erase(x - 1);
        if (check_ABC(x))
            st.insert(x);
        else
            st.erase(x);
        cout << st.size() << '\n';
    }
}
