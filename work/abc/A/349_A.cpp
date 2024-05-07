#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int n_score = 0;
    for (int i = 0; i < N - 1; i++) {
        int i_score;
        cin >> i_score;
        n_score += i_score;
    }
    n_score *= -1;
    cout << n_score << endl;
}
