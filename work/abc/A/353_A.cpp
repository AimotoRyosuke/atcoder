#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (auto &h : H)
        cin >> h;
    int first_h = H.at(0);
    for (int i = 1; i < N; i++) {
        if (first_h < H.at(i)) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
