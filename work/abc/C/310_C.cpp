#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;
    int ans = 0;
    map<string, bool> used;

    for (int i = 0; i < N; i++) {
        string s = S.at(i);
        if (!used[s])
            ans++;
        used[s] = true;
        reverse(s.begin(), s.end());
        used[s] = true;
    }
    cout << ans << endl;
}
