#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> L, R;
    rep(i, N) {
        int a;
        char c;
        cin >> a >> c;
        if (c == 'L')
            L.push_back(a);
        else
            R.push_back(a);
    }
    int sum = 0;
    rep(i, (int)L.size() - 1) { sum += abs(L.at(i + 1) - L.at(i)); }
    rep(i, (int)R.size() - 1) { sum += abs(R.at(i + 1) - R.at(i)); }
    cout << sum << '\n';
}
