#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> divider = {"dream", "dreamer", "erase", "eraser"};
    reverse(s.begin(), s.end());
    for (int i = 0; i < divider.size(); i++)
        reverse(divider.at(i).begin(), divider.at(i).end());

    string target;
    for (int i = 0; i < s.size(); i++) {
        target += s.at(i);
        for (int i = 0; i < divider.size(); i++) {
            if (target == divider.at(i)) {
                target = "";
                break;
            }
        }
        if (target.size() == 7) {
            break;
        }
    }
    if (target.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
