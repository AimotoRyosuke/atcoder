#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<vector<ll>> p(N, vector<ll>(2));
    ll height = 0;
    for (int i = 0; i < N; i++) {
        cin >> p.at(i).at(0) >> p.at(i).at(1);
    }
    sort(p.begin(), p.end(),
         [](const vector<ll> &alpha, const vector<ll> &beta) {
             return alpha[1] - alpha[0] < beta[1] - beta[0];
         });
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            height += p.at(i).at(1);
        } else {
            height += p.at(i).at(0);
        }
    }

    cout << height << endl;
}
