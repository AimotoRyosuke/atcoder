#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool check2(string s, string t) {
    int ng = 0;
    rep(i, s.size()) {
        if (s[i] != t[i + ng]) {
            if (ng)
                return false;
            ng++;
            if (s[i] != t[i + ng])
                return false;
        }
    }
    return true;
}

bool check3(string s, string t) {
    int ng = 0;
    rep(i, t.size()) {
        if (s[i + ng] != t[i]) {
            if (ng)
                return false;
            ng++;
            if (s[i + ng] != t[i])
                return false;
        }
    }
    return true;
}

bool check4(string s, string t) {
    int ng = 0;
    rep(i, t.size()) {
        if (s[i] != t[i]) {
            if (ng)
                return false;
            ng++;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    string T;
    cin >> T;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    vector<int> ans;
    rep(i, N) {
        string s = S.at(i);
        bool ok = false;
        if (s == T) {
            ok = true;
        } else if (s.size() == T.size() - 1) {
            ok = check2(s, T);
        } else if (s.size() == T.size() + 1) {
            ok = check3(s, T);
        } else if (s.size() == T.size()) {
            ok = check4(s, T);
        }
        if (ok)
            ans.push_back(i);
    }
    cout << ans.size() << '\n';
    rep(i, ans.size()) cout << ans[i] + 1 << " ";
}
