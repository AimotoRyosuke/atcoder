#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--) {
        // i+1文字の回文を探索する
        for (int j = 0; j <= s.size() - i - 1; j++) {
            // jはsの開始位置
            bool is_reversible = true;
            for (int k = 0; k < (i + 1) / 2 + (i + 1) % 2; k++) {
                // sの[j+k]番目とsの[i-k+j]番目を比較する
                int l_index = j + k;
                int r_index = i + j - k;
                char l = s.at(l_index);
                char r = s.at(r_index);
                if (l != r) {
                    is_reversible = false;
                    break;
                }
            }
            if (is_reversible) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
}
