#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> a = {};
    vector<int> results;
    for (int i = 0; i < q; i++) {
        int b, c;
        cin >> b >> c;
        if (b == 1) {
            a.push_back(c);
        } else {
            int index = a.size() - c;
            results.push_back(a.at(index));
        }
    }
    for (int i = 0; i < (int)results.size(); i++)
        cout << results.at(i) << endl;
}
