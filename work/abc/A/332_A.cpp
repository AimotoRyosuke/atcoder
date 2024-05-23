#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S, K;
    cin >> N >> S >> K;
    int price = 0;
    for (int i = 0; i < N; i++) {
        int p, q;
        cin >> p >> q;
        price += p * q;
    }
    if (price < S)
        price += K;
    cout << price << endl;
}
