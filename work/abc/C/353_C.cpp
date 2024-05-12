#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const auto limit = 100000000;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    ll answer = 0;
    for (auto &a : A) {
        cin >> a;
        answer += a;
    }
    sort(A.begin(), A.end());
    answer *= N - 1;
    ll count = 0;
    int j = N - 1;
    for (int i = 0; i < N - 1; i++) {
        while (j > i && A.at(j) + A.at(i) >= limit) {
            count += distance(A.begin() + i, A.begin() + j);
            j--;
        }
    }
    cout << answer - count * limit << endl;
}
