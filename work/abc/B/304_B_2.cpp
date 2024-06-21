#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int size = to_string(N).size();
    int e = max(0, (size - 3));
    int divisor = pow(10, e);
    cout << N - (N % divisor) << endl;
}
