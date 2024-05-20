#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= N - i; j++)
            for (int k = 0; k <= N - i - j; k++) {
                cout << i << " " << j << " " << k << endl;
            }
}
