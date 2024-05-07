// 0埋め
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int S_no = stoi(S.substr(3, 6));
    for (int i = 0; i < 349; i++) {
        int no = i + 1;
        string no_str = to_string(no).insert(0, 3 - to_string(no).size(), '0');
        if (S == "ABC" + no_str && S != "ABC316") {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
