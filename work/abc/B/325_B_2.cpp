#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(48);

    for (int i = 0; i < N; i++) {
        int w, x;
        cin >> w >> x;
        A.at(x) += w;
        A.at(x + 24) += w;
    }
    int max_p = 0;
    for (int i = 0; i < 24; i++) {
        int p = 0;
        for (int j = 0; j < 9; j++) {
            p += A.at(i + j);
        }
        max_p = max(max_p, p);
    }
    cout << max_p << endl;
}
