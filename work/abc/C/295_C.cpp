#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    unordered_map<int, int> M;
    int cnt = 0;
    for (auto &a : A) {
        cin >> a;
        if (M[a]) {
            cnt++;
            M[a]--;
        } else {
            M[a]++;
        }
    }
    cout << cnt << '\n';
}
