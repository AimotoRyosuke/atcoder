#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    unordered_map<int, int> M;
    vector<int> s;
    rep(i, N) {
        int a;
        cin >> a;
        M[a]++;
        s.push_back(a);
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int size = s.size();
    map<int, int> L;
    rep(i, size) L[size - i - 1] = M[s.at(i)];
    rep(i, N) { cout << L[i] << '\n'; }
}
