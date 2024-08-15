#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    ll cnt = 0;
    vector<ll> divisorSums(N);

    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            divisorSums[j]++;
        }
    }

    for (int AB = 1; AB < N; AB++) {
        int CD = N - AB;
        cnt += divisorSums[AB] * divisorSums[CD];
    }
    cout << cnt << endl;
    return 0;
}
