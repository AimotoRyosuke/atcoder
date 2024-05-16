#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    ll ans = 0;
    ll min_ans = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        ans += a;
        min_ans = min(min_ans, ans);
    }
    if (min_ans < 0)
        ans -= min_ans;
    cout << ans << endl;
}
