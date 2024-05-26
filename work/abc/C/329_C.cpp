#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    map<char, int> c_count;
    char current = S.at(0);
    int count = 0;
    for (int i = 0; i < N; i++) {
        char c = S.at(i);
        if (i == 0) {
            current = c;
            count = 1;
        } else if (c == current)
            count++;
        else {
            c_count[current] = max(c_count[current], count);
            current = c;
            count = 1;
        }
        if (i == N - 1)
            c_count[current] = max(c_count[current], count);
    }
    int ans = 0;
    for (auto [key, value] : c_count) {
        ans += value;
    }
    cout << ans << endl;
}
