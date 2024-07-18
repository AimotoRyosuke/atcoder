#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ull = unsigned long long;

vector<ull> r = {1,         11,         111,         1111,
                 11111,     111111,     1111111,     11111111,
                 111111111, 1111111111, 11111111111, 111111111111};
int main() {
    int N;
    cin >> N;
    int size = r.size();
    vector<ull> ans;
    rep(i, size) rep(j, size) rep(k, size) {
        ans.push_back(r[i] + r[j] + r[k]);
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    cout << ans[N - 1] << '\n';
}
