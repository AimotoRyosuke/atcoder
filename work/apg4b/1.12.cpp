#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int SLength = S.size();
    int answer = 1;
    for (int i = 0; i < SLength; i++) {
        char c = S.at(i);
        if (c == '+') {
            answer++;
        } else if (c == '-') {
            answer--;
        } else {
            continue;
        }
    }
    cout << answer << endl;
}
