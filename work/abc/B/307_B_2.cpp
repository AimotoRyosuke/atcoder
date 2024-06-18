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
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    bool ok = false;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            if (i == j)
                continue;
            if (get_is_palindrome(S.at(i) + S.at(j))) {
                ok = true;
                break;
            }
        }
    cout << (ok ? "Yes" : "No") << endl;
}
