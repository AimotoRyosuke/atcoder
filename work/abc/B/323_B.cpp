#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<vector<int>> v(n, vector<int>(2, 0)); // 0:番号、1:勝ち数
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
        v.at(i).at(0) = i;
        for (int j = 0; j < n; j++)
            if (s.at(i).at(j) == 'o')
                v.at(i).at(1)++;
    }
    sort(v.rbegin(), v.rend(),
         [](const vector<int> &alpha, const vector<int> &beta) {
             return (alpha[1] < beta[1]) ||
                    ((alpha[1] == beta[1]) && (alpha[0] > beta[0]));
         });
    for (int i = 0; i < n; i++) {
        cout << v.at(i).at(0) + 1 << ' ';
    }
    cout << endl;
}
