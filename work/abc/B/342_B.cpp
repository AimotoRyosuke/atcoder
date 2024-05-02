#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p.at(i);
    int q;
    cin >> q;
    vector<int> results(q);
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = 0; j < n; j++) {
            if (p.at(j) == a) {
                results.at(i) = a;
                break;
            } else if (p.at(j) == b) {
                results.at(i) = b;
                break;
            }
        }
    }
    for (int i = 0; i < q; i++)
        cout << results.at(i) << endl;
}
