#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<string> P(N);
    int min_age = pow(10, 9);
    int min_age_i = 0;
    for (int i = 0; i < N; i++) {
        string s;
        int a;
        cin >> s >> a;
        P.at(i) = s;
        if (min_age > a) {
            min_age = a;
            min_age_i = i;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << P.at((i + min_age_i) % N) << endl;
    }
}
