#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
        sum += A.at(i);
    }
    int avg = floor(sum / N);
    for (int i = 0; i < N; i++) {
        cout << abs(A.at(i) - avg) << endl;
    }
}
