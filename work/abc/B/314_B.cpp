#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> ca(n);
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        for (int j = 0; j < c; j++) {
            int a;
            cin >> a;
            ca.at(i).push_back(a);
        }
    }
    int x;
    cin >> x;
    vector<int> p;
    int num_of_bet = 37;
    for (int i = 0; i < ca.size(); i++) {
        for (int j = 0; j < ca.at(i).size(); j++) {
            if (ca.at(i).at(j) == x && ca.at(i).size() &&
                ca.at(i).size() < num_of_bet) {
                p.clear();
                num_of_bet = ca.at(i).size();
            }
            if (ca.at(i).at(j) == x && ca.at(i).size() <= num_of_bet) {
                p.push_back(i + 1);
                break;
            }
        }
    }
    cout << p.size() << endl;
    for (int i = 0; i < p.size(); i++) {
        cout << p.at(i) << " ";
    }
    cout << endl;
}
