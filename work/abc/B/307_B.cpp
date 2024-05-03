// 回文判定
#include <bits/stdc++.h>
using namespace std;

bool get_is_palindrome(string s) {
    int s_size = s.size();
    for (int i = 0; i < s_size + s_size % 2 / 2; i++) {
        if (s.at(i) != s.at(s_size - 1 - i)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            if (get_is_palindrome(s.at(i) + s.at(j))) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
