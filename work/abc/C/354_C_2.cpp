#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> cards(N);
    for (auto &card : cards)
        cin >> card.first >> card.second;

    auto A = cards;
    sort(A.begin(), A.end(), [](const auto &a, const auto &b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });
    int l = 0;
    map<pair<int, int>, int> w;
    int next = 0;
    rep(r, N) {
        auto cl = A.at(l), cr = A.at(r);
        if (r != 0 && cr.first != A.at(r - 1).first && cl.second > cr.second) {
            if (next) {
                l = next;
                cl = A.at(l), cr = A.at(r);
            }
            next = r;
        }
        if (cl.first > cr.first && cl.second < cr.second) {
            w[cr] = 1;
        }
    }
    cout << N - w.size() << '\n';
    rep(i, N) {
        if (w[cards[i]])
            continue;
        cout << i + 1 << " ";
    }
}
