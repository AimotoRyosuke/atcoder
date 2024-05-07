#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> T(N, 0);
    for (int i = 0; i < Q; i++) {
        int t;
        cin >> t;
        T.at(t - 1)++;
    }
    int count = 0;
    for (int i = 0; i < (int)T.size(); i++) {
        if (T.at(i) % 2 == 0)
            count++;
    }
    cout << count << endl;
}
