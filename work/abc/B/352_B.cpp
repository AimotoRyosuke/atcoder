#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int s_index = 0;
    vector<int> corrects;
    for (int i = 0; i < (int)T.size(); i++) {
        if (S.at(s_index) == T.at(i)) {
            corrects.push_back(i);
            s_index++;
            if (s_index == S.size()) {
                break;
            }
        }
    }
    for (auto correct : corrects)
        cout << correct + 1 << " ";
    cout << endl;
}
