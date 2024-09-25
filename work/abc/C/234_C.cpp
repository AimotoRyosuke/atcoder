#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll N;
    cin >> N;
    bitset<60> BN(N);
    string BS = BN.to_string();
    bool ok = false;
    rep(i, (int)BS.size()) {
        if (BS[i] == '1') {
            cout << 2;
            ok = true;
        } else if (ok)
            cout << 0;
    }
    cout << '\n';
}
