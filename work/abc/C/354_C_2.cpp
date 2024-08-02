#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Card {
    int a, c, i;
};

int main() {
    int N;
    cin >> N;
    vector<Card> cards(N);
    rep(i, N) {
        Card card;
        cin >> card.a >> card.c;
        card.i = i;
        cards[i] = card;
    }

    sort(cards.begin(), cards.end(), [](const auto &a, const auto &b) {
        if (a.c != b.c) {
            return a.c < b.c;
        }
        return a.a > b.a;
    });
    int strength = 0;
    vector<int> ans;
    rep(i, N) {
        if (strength <= cards[i].a) {
            strength = cards[i].a;
            ans.push_back(cards[i].i);
            continue;
        }
    }
    sort(ans.begin(), ans.end());
    int size = ans.size();
    cout << size << '\n';
    rep(i, size) { cout << ans.at(i) + 1 << ' '; }
}
