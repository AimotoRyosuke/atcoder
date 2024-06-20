#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> dm = {
        {'A', 0}, {'B', 3}, {'C', 4}, {'D', 8}, {'E', 9}, {'F', 14}, {'G', 23},
    };
    char p, q;
    cin >> p >> q;
    int ans = abs(dm[p] - dm[q]);
    cout << ans << endl;
}
