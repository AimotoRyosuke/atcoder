#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    for (int i = 0; i < N - 1; i++) {
        char l = S.at(i), r = S.at(i + 1);
        if ((l == 'a' && r == 'b') || (l == 'b' && r == 'a')) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
