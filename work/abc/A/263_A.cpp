#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    map<int, int> m;
    m[A]++;
    m[B]++;
    m[C]++;
    m[D]++;
    m[E]++;
    bool ok = m.size() == 2 && (m.at(A) == 2 || m.at(A) == 3);
    cout << (ok ? "Yes" : "No") << '\n';
}
