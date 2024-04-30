#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> results(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            if (num) {
                results.at(i).push_back(j + 1);
            }
        }
    }
    for (int i = 0; i < (int)results.size(); i++) {
        for (int j = 0; j < (int)results.at(i).size(); j++) {
            cout << results.at(i).at(j) << " ";
        }
        cout << endl;
    }
}
