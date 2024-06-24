#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int t = 0, a = 0;
    for (int i = 0; i < N; i++) {
        if (S.at(i) == 'T')
            t++;
        else
            a++;
    }
    if (t == a) {
        if (S.at(S.size() - 1) == 'T')
            a++;
        else
            t++;
    }
    cout << (t > a ? "T" : "A") << endl;
}
