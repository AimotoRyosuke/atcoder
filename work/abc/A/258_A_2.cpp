#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int K;
    cin >> K;
    int hour = 21 + K / 60;
    int min = K % 60;
    printf("%02d:%02d", hour, min);
}
