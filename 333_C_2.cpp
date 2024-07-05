// 復習する
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

vector<ll> D = {
    1,       11,       111,       1111,       11111,       111111,
    1111111, 11111111, 111111111, 1111111111, 11111111111, 111111111111,
};
int len = 12;
int main() {
    int N;
    cin >> N;
    vector<ll> sum;
    rep(i, len) rep(j, len) rep(k, len)
        sum.push_back((ll)D.at(i) + (ll)D.at(j) + (ll)D.at(k));

    sort(sum.begin(), sum.end());
    sum.erase(unique(sum.begin(), sum.end()), sum.end());
    cout << sum[N - 1] << endl;
}
