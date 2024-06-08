#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int size = pow(3, N);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < N; k++) {
                int base = size / pow(3, k);
                if (i % base >= base / 3 && i % base < base * 2 / 3 &&
                    j % base >= base / 3 && j % base < base * 2 / 3) {
                    cout << ".";
                    goto exit;
                }
            }
            cout << "#";
        exit:
            continue;
        }
        cout << endl;
    }
}
