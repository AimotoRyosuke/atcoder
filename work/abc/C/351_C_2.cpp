#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B;
    for (auto &a : A)
        cin >> a;
    rep(i, N) {
        B.push_back(A.at(i));
        while (B.size() > 1 && B.at(B.size() - 1) == B.at(B.size() - 1 - 1)) {
            int b = B.at(B.size() - 1);
            B.pop_back();
            B.pop_back();
            B.push_back(b + 1);
        }
    }
    cout << B.size() << '\n';
}
