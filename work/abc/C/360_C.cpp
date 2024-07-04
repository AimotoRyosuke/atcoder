#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> W(N);
    int sum = 0;
    for (auto &w : W) {
        cin >> w;
        sum += w;
    }
    map<int, int> max_w;
    rep(i, N) max_w[A.at(i)] = max(max_w[A.at(i)], W.at(i));
    for (auto &[k, v] : max_w) {
        sum -= v;
    }
    cout << sum << endl;
}
