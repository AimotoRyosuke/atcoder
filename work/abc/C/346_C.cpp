#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N;
    ull K;
    cin >> N >> K;
    vector<ull> A(N);
    set<int> used_num;
    for (auto &a : A)
        cin >> a;

    ull K_sum = K % 2 == 0 ? K * K / 2 + K / 2 : (K + 1) / 2 * K;
    for (int i = 0; i < N; i++) {
        if (used_num.count(A.at(i)) == 0 && K >= A.at(i)) {
            K_sum -= A.at(i);
            used_num.insert(A.at(i));
        }
    }
    cout << K_sum << endl;
}
