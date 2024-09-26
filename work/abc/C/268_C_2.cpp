
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<int> times(N);
    rep(i, N) {
        int a = A.at(i);
        int first = (A.at(i) - i - 1 + N) % N;
        int second = (first + 1) % N;
        int third = (first + 2) % N;
        times[first]++;
        times[second]++;
        times[third]++;
    }
    int mx = *max_element(times.begin(), times.end());
    cout << mx << '\n';
}
