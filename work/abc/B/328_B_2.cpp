#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> D(N);
    int count = 0;
    for (int i = 0; i < N; i++) {
        int m = i + 1;
        int d;
        cin >> d;
        if (m >= 1 && m <= 9) {
            if (d >= m)
                count++;
            if (d >= m * 11)
                count++;
        } else if (m % 11 == 0) {
            if (d >= m)
                count++;
            if (d >= m / 11)
                count++;
        }
    }
    cout << count << endl;
}
