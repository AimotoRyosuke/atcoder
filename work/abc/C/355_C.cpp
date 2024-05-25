#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> A(T);
    for (auto &a : A)
        cin >> a;
    vector<vector<int>> B(2 * N + 2);
    for (int i = 0; i < T; i++) {
        int a = A.at(i);
        int x = (a - 1) % N;
        int y = (a - 1) / N;
        B.at(x).push_back(a);
        B.at(N + y).push_back(a);
        if (B.at(x).size() == N || B.at(N + y).size() == N) {
            cout << i + 1 << endl;
            return 0;
        }
        if (x == y) {
            int index = 2 * N + 1 - 1;
            B.at(index).push_back(a);
            if (B.at(index).size() == N) {
                cout << i + 1 << endl;
                return 0;
            }
        }
        if (N - 1 - x == y) {
            int index = 2 * N + 2 - 1;
            B.at(index).push_back(a);
            if (B.at(index).size() == N) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}
