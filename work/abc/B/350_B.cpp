#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> t(n, 0);

    for (int i = 0; i < q; i++) {
        int no;
        cin >> no;
        t.at(no - 1)++;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (t.at(i) % 2 == 0) {
            count++;
        }
    }
    cout << count << endl;
}
