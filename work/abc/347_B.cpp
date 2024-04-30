#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> combinations;
    for (int i = 0; i < s.size(); i++) {
        // iはsの文字列の開始位置
        for (int j = i; j < s.size(); j++) {
            // jはsの文字列の終了位置
            string sub = s.substr(i, j - i + 1);
            cout << sub << endl;
            // combinationsにsubが含まれていない場合、combinationsにsubを格納する
            bool exist = find(combinations.begin(), combinations.end(), sub) !=
                         combinations.end();
            if (!exist) {
                combinations.push_back(sub);
            }
        }
    }
    cout << combinations.size() << endl;
}
