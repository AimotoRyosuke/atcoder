#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    vector<int> A(N);
    int count = 0;
    for (auto &a : A) {
        cin >> a;
        if (a >= L)
            count++;
    }
    cout << count << endl;
}
