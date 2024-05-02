#include <bits/stdc++.h>
using namespace std;

string get_begin(int num, string target) {
    string value = "";
    for (int i = 0; i < num; i++)
        value += target.at(i);
    return value;
}
string get_end(int num, string target) {
    string value = "";
    for (int i = (int)target.size() - num; i < (int)target.size(); i++)
        value += target.at(i);
    return value;
}

int main() {
    int n, m;
    string s, t;
    cin >> n >> m;
    cin >> s >> t;
    bool is_prefix = get_begin(s.size(), t) == s;
    bool is_suffix = get_end(s.size(), t) == s;
    if (is_prefix && is_suffix)
        cout << 0 << endl;
    else if (is_prefix && !is_suffix)
        cout << 1 << endl;
    else if (!is_prefix && is_suffix)
        cout << 2 << endl;
    else
        cout << 3 << endl;
}
