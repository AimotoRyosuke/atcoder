#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A_list;
    for (int i = 0; i < N; i++) {
        int c;
        cin >> c;
        vector<int> A(c);
        for (auto &a : A)
            cin >> a;
        A_list.push_back(A);
    }
    int X;
    cin >> X;
    vector<int> list;
    int min = 37;
    for (int i = 0; i < N; i++) {
        auto A = A_list.at(i);
        for (auto &a : A) {
            if (a == X) {
                if (A.size() < min) {
                    min = A.size();
                    list.clear();
                    list.push_back(i);
                } else if (A.size() == min) {
                    list.push_back(i);
                }
            }
        }
    }
    cout << list.size() << endl;
    for (auto &value : list)
        cout << value + 1 << " ";
    cout << endl;
}
