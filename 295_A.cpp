#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> W(N);
    bool ok = false;
    for (auto &w : W) {
        cin >> w;
        if (w == "and" || w == "not" || w == "that" || w == "the" || w == "you")
            ok = true;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
