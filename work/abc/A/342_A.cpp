#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    map<char, int> c_count;
    for (int i = 0; i < (int)S.size(); i++) {
        c_count[S.at(i)]++;
    }
    for (auto m : c_count)
        if (m.second == 1)
            for (int i = 0; i < (int)S.size(); i++) {
                if (m.first == S.at(i))
                    cout << i + 1 << endl;
            }
}
