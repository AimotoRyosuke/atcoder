#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    auto rm = [&](char c) { S.erase(remove(S.begin(), S.end(), c), S.end()); };
    rm('a');
    rm('i');
    rm('u');
    rm('e');
    rm('o');
    cout << S << endl;
}
