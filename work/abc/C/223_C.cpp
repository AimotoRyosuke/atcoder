// 小数点
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<double> A(N), B(N);
    rep(i, N) { cin >> A[i] >> B[i]; }
    double t = 0, ans = 0;
    rep(i, N) t += A[i] / B[i];
    t /= 2;
    rep(i, N) {
        ans += min(A[i], B[i] * t);
        t -= min(A[i] / B[i], t);
        if (t <= 0)
            break;
    }
    printf("%.10f", ans);
}
