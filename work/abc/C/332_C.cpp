#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    int max_lack = 0;
    int lack = 0, m = M;
    for (int i = 0; i < (int)S.size(); i++) {
        char c = S.at(i);
        if (c == '0') {
            lack = 0, m = M;
        } else if (c == '1') {
            if (m == 0) {
                lack++;
                max_lack = max(max_lack, lack);
            } else
                m--;
        } else if (c == '2') {
            lack++;
            max_lack = max(max_lack, lack);
        }
    }
    cout << max_lack << endl;
}
