#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> divisors;
    for (int i = 0; i <= 9; i++)
        if (i != 0 && N % i == 0)
            divisors.push_back(i);
    for (int i = 0; i <= N; i++) {
        bool ok = false;
        for (int j = 0; j < (int)divisors.size(); j++) {
            int div = divisors.at(j);
            if (i % (N / div) == 0) {
                cout << div;
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << "-";
    }
    cout << endl;
}
