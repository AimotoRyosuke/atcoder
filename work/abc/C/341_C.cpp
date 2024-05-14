// 配列の引数は参照すべき
#include <bits/stdc++.h>
using namespace std;

const char land = '.';
const char sea = '#';

bool can_move(int &pos_i, int &pos_j, char c, vector<string> &S) {
    if (c == 'L')
        pos_j -= 1;
    else if (c == 'R')
        pos_j += 1;
    else if (c == 'U')
        pos_i -= 1;
    else if (c == 'D')
        pos_i += 1;
    return S.at(pos_i).at(pos_j) == land;
}

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    string T;
    cin >> T;
    vector<string> S(H);
    for (auto &s : S)
        cin >> s;
    int count = 0;
    for (int i = 1; i < H - 1; i++) {
        for (int j = 1; j < W - 1; j++) {
            // iはy軸、jはx軸の開始位置
            int pos_i = i;
            int pos_j = j;
            if (S.at(pos_i).at(pos_j) == sea)
                continue;
            bool ok = true;
            for (auto c : T) {
                if (!can_move(pos_i, pos_j, c, S))
                    goto exit;
            }
            if (ok)
                count++;
        exit:
            continue;
        }
    }
    cout << count << endl;
}
