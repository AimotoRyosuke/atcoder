#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    int count = 0;
    int k = 0;
    for (int i = 0; i < N; i++) {
        int next = A.at(i);
        if (K >= k + next) {
            k += next;
        } else {
            count++;
            k = next;
        }
        if (i == N - 1) {
            count++;
        }
    }
    cout << count << endl;
}
