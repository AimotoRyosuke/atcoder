#include <bits/stdc++.h>
using namespace std;

signed main() {
    int N, k;
    cin >> N >> k;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> B(N);
    for (auto &b : B)
        cin >> b;
    vector<vector<bool>> dp(N, vector<bool>(2, false));
    dp.at(0).at(0) = true;
    dp.at(0).at(1) = true;
    for (int i = 1; i < N; i++) {
        if (dp.at(i - 1).at(0)) {
            if (abs(A.at(i - 1) - A.at(i)) <= k)
                dp.at(i).at(0) = true;
            if (abs(A.at(i - 1) - B.at(i)) <= k)
                dp.at(i).at(1) = true;
        }
        if (dp.at(i - 1).at(1)) {
            if (abs(B.at(i - 1) - A.at(i)) <= k)
                dp.at(i).at(0) = true;
            if (abs(B.at(i - 1) - B.at(i)) <= k)
                dp.at(i).at(1) = true;
        }
    }
    if (dp.at(N - 1).at(0) || dp.at(N - 1).at(1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
