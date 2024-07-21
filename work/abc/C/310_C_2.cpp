#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    unordered_set<string> A;
    rep(i, N) {
        string s;
        cin >> s;
        if (!A.count(s) && !A.count(string(s.rbegin(), s.rend()))) {
            A.insert(s);
        }
    }
    cout << A.size() << '\n';
}
