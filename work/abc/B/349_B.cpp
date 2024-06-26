// mapのkeyが存在するか
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> duplications;

    for (char c : s) {
        if (duplications.count(c) == 0) {
            duplications[c] = 1;
        } else {
            duplications[c]++;
        }
    }

    vector<int> kind(s.size() + 1, 0);
    for (auto ite = duplications.begin(); ite != duplications.end(); ite++) {
        kind.at(ite->second)++;
        if (kind.at(ite->second) > 2) {
            break;
        }
    }
    bool is_good = true;
    for (int i = 0; i < kind.size(); i++) {
        if (kind.at(i) % 2 != 0) {
            is_good = false;
            break;
        }
    }
    if (is_good)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
