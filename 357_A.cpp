#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> H(N);
    for (auto &h : H) {
        cin >> h;
    }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int h = H.at(i);
        M -= h;
        if (M >= 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
