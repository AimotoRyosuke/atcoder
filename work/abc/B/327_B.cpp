#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll multi(int num, ll max) {
    ll answer = 1;
    for (int i = 0; i < num; i++) {
        answer *= num;
        if (answer > max) {
            return 0;
        }
    }
    return answer;
}

int main() {
    ll b;
    cin >> b;

    int ans = -1;
    for (int i = 1; i < 20; i++) {
        ll result = multi(i, b);
        if (result == 0) {
            break;
        } else if (result == b) {
            ans = i;
        }
    }
    cout << ans << endl;
}
