#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N * 7);
    for (auto &a : A)
        cin >> a;
    vector<int> ans(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 7; j++) {
            ans.at(i) += A.at(i * 7 + j);
        }
    }
    for (auto &a : ans)
        cout << a << " ";
    cout << endl;
}
