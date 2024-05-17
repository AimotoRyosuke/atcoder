#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    map<char, int> c_count;

    for (int i = 0; i < (int)S.size(); i++) {
        c_count[S.at(i)]++;
    }
    int max_count = 0;
    char max_c = 'z';
    for (auto c_map : c_count) {
        if (c_map.second > max_count ||
            (c_map.second > max_count && c_map.first - max_c < 0)) {
            max_count = c_map.second;
            max_c = c_map.first;
        }
    }
    cout << max_c << endl;
}
