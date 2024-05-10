#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    vector<long long int> D(2 * N);
    int week = A + B;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        D.at(i) = num % week;
        D.at(i + N) = D.at(i) + week;
    }
    sort(D.begin(), D.end());
    for (int i = 0; i < D.size() - 1; i++) {
        if (D.at(i + 1) - D.at(i) > B) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
