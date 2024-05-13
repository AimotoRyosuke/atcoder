#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int current;
    vector<vector<int>> A(N, vector<int>(N));
    for (auto &a : A) {
        for (auto &a_child : a) {
            cin >> a_child;
        }
    }
    for (auto &a : A) {
        for (int i = 0; i < (int)a.size(); i++) {
            if (a.at(i))
                cout << i + 1 << " ";
        }
        cout << endl;
    }
}
