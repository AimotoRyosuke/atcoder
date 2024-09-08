#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> order(N);
    iota(order.begin(), order.end(), 0);
    vector<int> balls(N);
    iota(balls.begin(), balls.end(), 0);

    rep(i, Q) {
        int x;
        cin >> x;
        x--;
        int o = balls[x];
        int b1 = order[o];
        int d = o == N - 1 ? -1 : 1;
        int b2 = order[o + d];
        swap(order[o], order[(o + d)]);
        swap(balls[b1], balls[b2]);
    }
    rep(i, N) { cout << order[i] + 1 << ' '; }
}
