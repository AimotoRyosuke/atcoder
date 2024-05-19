#include <bits/stdc++.h>
using namespace std;

int main() {
    int H;
    cin >> H;
    int h = 0;
    int current = 1;
    int i = 0;
    while (h <= H) {
        h += current;
        current *= 2;
        i++;
    }
    cout << i << endl;
}
