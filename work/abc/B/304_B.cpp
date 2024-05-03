// n桁以下を切り捨て
#include <bits/stdc++.h>
using namespace std;

int truncate(int target, int digit) {
    if (digit < 1) {
        return target;
    }
    string s = to_string(target);
    for (int i = 0; i < digit; i++) {
        s.at(s.size() - 1 - i) = '0';
    }
    return stoi(s);
}

int main() {
    string n;
    cin >> n;
    cout << truncate(stoi(n), n.size() - 3) << endl;
}
