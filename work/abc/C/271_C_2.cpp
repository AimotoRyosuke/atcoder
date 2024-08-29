#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    unordered_set<int> st;
    for (auto &a : A) {
        cin >> a;
        st.insert(a);
    }
    int ans = 0, cost = 0;
    for (int i = 1; i <= N; i++) {
        if (st.count(i))
            cost++;
        else
            cost += 2;
        if (cost == N) {
            ans = i;
            break;

        } else if (cost > N) {
            ans = i - 1;
            break;
        }
    }
    cout << ans << '\n';
}
