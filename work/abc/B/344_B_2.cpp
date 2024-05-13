#include <bits/stdc++.h>
using namespace std;

int main() {
    int current = 1;
    vector<int> A;
    while (current != 0) {
        cin >> current;
        A.push_back(current);
    }
    for (int i = 0; i < (int)A.size(); i++) {
        cout << A.at(A.size() - 1 - i) << endl;
    }
}
