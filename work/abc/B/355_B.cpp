#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M), C;
    for (auto &a : A) {
        cin >> a;
        C.push_back(a);
    }
    for (auto &b : B) {
        cin >> b;
        C.push_back(b);
    }
    sort(C.begin(), C.end());
    for (int j = 0; j < (int)A.size() - 1; j++) {
        int al = A.at(j);
        for (int k = j + 1; k < (int)A.size(); k++) {
            int ar = A.at(k);
            for (int i = 0; i < (int)C.size() - 1; i++) {
                int cl = C.at(i), cr = C.at(i + 1);
                if (al == cl && ar == cr) {
                    cout << "Yes" << endl;
                    return 0;
                }
                if (al == cr && ar == cl) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}
