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
    string S;
    cin >> S;
    int M = 0;
    for (int i = 0; i < (int)S.size(); i++) {
        for (int j = 0; j <= (int)S.size(); j++) {
            string s = S.substr(i, j);
            if (s.size() > M && get_is_palindrome(s))
                M = s.size();
        }
    }
    cout << M << endl;
}
