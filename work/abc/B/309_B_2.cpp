#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> A(N);
    for (auto &a : A)
        cin >> a;
    vector<string> B = A;
    for (int i = 1; i < N; i++) {
        B.at(0).at(i) = A.at(0).at(i - 1);
    }
    for (int i = 1; i < N; i++) {
        B.at(i).at(N - 1) = A.at(i - 1).at(N - 1);
    }
    for (int i = 1; i < N; i++) {
        B.at(N - 1).at(N - 1 - i) = A.at(N - 1).at(N - i);
    }
    for (int i = 1; i < N; i++) {
        B.at(N - 1 - i).at(0) = A.at(N - i).at(0);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << B.at(i).at(j);
        }
        cout << endl;
    }
}
