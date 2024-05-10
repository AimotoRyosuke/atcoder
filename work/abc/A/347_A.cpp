#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> results;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a % K == 0)
            results.push_back(a / K);
    }
    sort(results.begin(), results.end());
    for (auto &result : results)
        cout << result << " ";
    cout << endl;
}
