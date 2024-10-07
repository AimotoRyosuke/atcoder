#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

struct Tc {
    int t, k;
    vector<int> A;
    void input() {
        cin >> t >> k;
        A = vector<int>(k);
        rep(i, k) {
            cin >> A.at(i);
            A.at(i)--;
        }
    }
};

int main() {
    int N;
    cin >> N;
    vector<Tc> T(N);
    rep(i, N) { T.at(i).input(); }
    auto tn = T.at(N - 1);
    ll time = 0;
    vector<bool> used(N);
    auto f = [&](auto f, int cur) {
        if (cur == -1) {
            time += T.at(cur).t;
            return;
        }
        if (used[cur])
            return;
        time += T.at(cur).t;
        used[cur] = true;
        rep(i, T.at(cur).A.size()) { f(f, T.at(cur).A.at(i)); }
    };
    f(f, N - 1);
    cout << time << '\n';
}
