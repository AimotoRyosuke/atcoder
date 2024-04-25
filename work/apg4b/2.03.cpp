#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    vector<vector<string>> result =
        vector<vector<string>>(N, vector<string>(N, "-"));
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
        A.at(i)--;
        B.at(i)--;
        result.at(A.at(i)).at(B.at(i)) = "o";
        result.at(B.at(i)).at(A.at(i)) = "x";
    }
    // resultを出力
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result.at(i).size(); j++) {
            cout << result.at(i).at(j);
            if (j == result.size() - 1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }
}
