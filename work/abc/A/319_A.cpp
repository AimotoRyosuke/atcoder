#include <bits/stdc++.h>
using namespace std;

const map<string, int> score_map = {
    {"tourist", 3858},   {"ksun48", 3679},  {"Benq", 3658},
    {"Um_nik", 3648},    {"apiad", 3638},   {"Stonefeang", 3630},
    {"ecnerwala", 3613}, {"mnbvmar", 3555}, {"newbiedmy", 3516},
    {"semiexp", 3481},
};

int main() {
    string S;
    cin >> S;
    int score = score_map.at(S);
    cout << score << endl;
}
