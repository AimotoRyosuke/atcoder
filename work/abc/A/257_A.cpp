#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    int N, X;
    cin >> N >> X;
    cout << alpha.at((X + N - 1) / N - 1) << '\n';
}
