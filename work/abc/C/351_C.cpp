// x^n+x^n=x^n+1
#include <bits/stdc++.h>
using namespace std;
void check_A(vector<int> &A) {
    if (A.size() <= 1) {
        return;
    } else if (A.at(A.size() - 1) != A.at(A.size() - 2)) {
        return;
    } else {
        int a = A.at(A.size() - 1);
        A.pop_back();
        A.pop_back();
        A.push_back(a + 1);
        check_A(A);
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> A;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.push_back(a);
        check_A(A);
    }
    cout << A.size() << endl;
}
