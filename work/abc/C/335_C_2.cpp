#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<pair<int, int>> ans;
    vector<pair<int, int>> H;
    rep(i, N) { H.emplace_back(N - i, 0); }
    rep(i, Q) {
        int num;
        cin >> num;
        if (num == 1) {
            char c;
            cin >> c;
            auto h = H.at(H.size() - 1);
            if (c == 'R')
                h.first++;
            else if (c == 'L')
                h.first--;
            else if (c == 'U')
                h.second++;
            else if (c == 'D')
                h.second--;
            H.push_back(h);
        } else {
            int j;
            cin >> j;
            auto h = H.at(H.size() - j);
            cout << h.first << " " << h.second << endl;
        }
    }
}
