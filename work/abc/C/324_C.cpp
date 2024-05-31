#include <bits/stdc++.h>
using namespace std;

bool check1(string t, string s) {
    int wrong = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s.at(i) != t.at(i + wrong)) {
            if (wrong)
                return false;
            wrong++;
            if (s.at(i) != t.at(i + wrong))
                return false;
        }
    }
    return true;
}

bool check2(string t, string s) {
    int wrong = 0;
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (s.at(i + wrong) != t.at(i)) {
            if (wrong)
                return false;
            wrong++;
            if (s.at(i + wrong) != t.at(i))
                return false;
        }
    }
    return true;
}

bool check3(string t, string s) {
    int wrong = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s.at(i) != t.at(i)) {
            if (wrong)
                return false;
            wrong++;
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
    for (int i = 0; i < N; i++) {
        string s = S.at(i);
        if (s == T) {
            ans.push_back(i);
        } else if (s.size() == T.size() - 1) {
            if (check1(T, s))
                ans.push_back(i);

        } else if (s.size() == T.size() + 1) {
            if (check2(T, s))
                ans.push_back(i);
        } else if (s.size() == T.size()) {
            if (check3(T, s))
                ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans.at(i) + 1 << " ";
    }
    cout << endl;
}
