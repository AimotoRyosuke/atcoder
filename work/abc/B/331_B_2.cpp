#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;
    int price = 1e9;
    for (int i = 0; i <= N; i++) {
        if (N - i * 6 <= 0) {
            price = min(price, S * i);
            break;
        }
        for (int j = 0; j <= N; j++) {
            int temp = (N - i * 6 - j * 8);
            if (temp <= 0) {
                price = min(price, S * i + M * j);
                break;
            }
            int k = temp % 12 == 0 ? temp / 12 : temp / 12 + 1;
            price = min(price, S * i + M * j + L * k);
        }
    }
    cout << price << endl;
}
