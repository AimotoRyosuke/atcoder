#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> B(M);
    for (auto &b : B) {
        cin >> b;
        b++;
    }
    vector<int> events;
    rep(i, N) { events.push_back(A.at(i)); }
    rep(i, M) { events.push_back(B.at(i)); }
    sort(events.begin(), events.end());
    cout << events[M - 1] << '\n';
}
