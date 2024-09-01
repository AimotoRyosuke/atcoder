#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct card {
    int a, c, i;
};

int main() {

    int N;
    cin >> N;
    vector<card> C(N);
    rep(i, N) {
        cin >> C.at(i).a >> C.at(i).c;
        C.at(i).i = i + 1;
    }
    sort(C.begin(), C.end(),
         [](const auto &a, const auto &b) { return a.a > b.a; });
    vector<card> ans;
    int cost = 1e9 + 1;
    rep(i, N) {
        if (C.at(i).c < cost) {
            ans.push_back(C.at(i));
            cost = C.at(i).c;
        }
    }
    sort(ans.begin(), ans.end(),
         [](const auto &a, const auto &b) { return a.i < b.i; });
    int s = ans.size();
    cout << s << '\n';
    rep(i, s) cout << ans.at(i).i << ' ';
}
