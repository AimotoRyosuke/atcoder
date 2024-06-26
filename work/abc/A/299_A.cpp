#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    bool in = false;
    for (int i = 0; i < N; i++) {
        char c = S.at(i);
        if (c == '|')
            in = !in;
        else if (c == '*')
            break;
    }
    cout << (in ? "in" : "out") << endl;
}
