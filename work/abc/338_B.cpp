#include <bits/stdc++.h>
using namespace std;

const string alphabet = "abcdefghijklmnopqrstuvwxyz";

int main() {
    string s;
    cin >> s;

    map<char, int> alphabetMap;
    for (int i = 0; i < (int)alphabet.size(); i++)
        alphabetMap[alphabet.at(i)] = 0;

    int maximum = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        alphabetMap[s.at(i)]++;
        if (alphabetMap[s.at(i)] > maximum) {
            maximum = alphabetMap[s.at(i)];
        }
    }
    for (const auto &[key, value] : alphabetMap) {
        if (alphabetMap[key] == maximum) {
            cout << key << endl;
            break;
        }
    }
}
