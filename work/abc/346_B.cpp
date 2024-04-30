// 復讐する

#include <bits/stdc++.h>
using namespace std;

const string t = "wbwbwwbwbwbw";

int main() {
    int w, b;
    cin >> w >> b;

    for (int i = 0; i < (int)t.size(); i++) {
        // nwはwの該当数、nbはbの該当数
        int nw = 0, nb = 0;
        for (int j = 0; j < w + b; j++) {
            // i+jはtの文字列の開始位置
            // w+bは探索する文字列の最大長
            // もしtのi+j番目をtの長さで割った余りがwだったらnwをインクリメント、そうでなければnbをインクリメント
            if (t[(i + j) % t.size()] == 'w')
                ++nw;
            else
                ++nb;
        }
        if (w == nw and b == nb) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
