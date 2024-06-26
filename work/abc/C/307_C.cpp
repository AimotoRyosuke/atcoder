#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Sheet {
    int h, w;
    vector<string> s;
    void input() {
        cin >> h >> w;
        s = vector<string>(h);
        rep(i, h) cin >> s[i];
    }
    void clear() { rep(i, h) rep(j, w) s[i][j] = '.'; }
    bool copy(Sheet a, int di, int dj) {
        rep(i, a.h) rep(j, a.w) {
            if (a.s[i][j] == '.')
                continue;
            int ni = i + di, nj = j + dj;
            if (ni < 0 || ni >= h || nj < 0 || nj >= w)
                return false;
            s[ni][nj] = a.s[i][j];
        }
        return true;
    }
};

int main() {
    Sheet a, b, x;
    a.input();
    b.input();
    x.input();

    for (int ai = -a.h + 1; ai < x.h; ai++) {
        for (int aj = -a.w + 1; aj < x.w; aj++) {
            for (int bi = -b.h + 1; bi < x.h; bi++) {
                for (int bj = -b.w + 1; bj < x.w; bj++) {
                    Sheet y = x;
                    y.clear();
                    if (!y.copy(a, ai, aj))
                        continue;
                    if (!y.copy(b, bi, bj))
                        continue;
                    if (x.s == y.s) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
}

// int main() {
//     int HA, WA;
//     cin >> HA >> WA;
//     vector<string> A(HA);
//     vector<pair<int, int>> blacksA;
//     for (int i = 0; i < HA; i++) {
//         cin >> A.at(i);
//         for (int j = 0; j < WA; j++) {
//             if (A.at(i).at(j) == '#')
//                 blacksA.emplace_back(i, j);
//         }
//     }
//     int HB, WB;
//     cin >> HB >> WB;
//     vector<string> B(HB);
//     vector<pair<int, int>> blacksB;
//     for (int i = 0; i < HB; i++) {
//         cin >> B.at(i);
//         for (int j = 0; j < WB; j++) {
//             if (B.at(i).at(j) == '#')
//                 blacksB.emplace_back(i, j);
//         }
//     }
//     int HX, WX;
//     cin >> HX >> WX;
//     vector<string> X(HX);
//     vector<pair<int, int>> blacksX;
//     for (int i = 0; i < HX; i++) {
//         cin >> X.at(i);
//         for (int j = 0; j < WX; j++)
//             if (X.at(i).at(j) == '#')
//                 blacksX.emplace_back(i, j);
//     }
//     //
//     Aの最初の黒をXの黒に移動し、Aの他の黒がXの黒に全て一致する場合はBの検証に移る
//     vector<vector<pair<int, int>>> remain_list;
//     for (int i = 0; i < (int)blacksX.size(); i++) {
//         auto initPos = blacksX.at(i);
//         int diffY = initPos.first - blacksA.at(0).first;
//         int diffX = initPos.second - blacksA.at(0).second;
//         auto remain = blacksX;
//         bool ok = true;
//         for (int j = 0; j < blacksA.size(); j++) {
//             auto blackA = blacksA.at(j);
//             blackA = {blackA.first + diffY, blackA.second + diffX};
//             // blackAがblacksXに存在するか
//             auto it = find(remain.begin(), remain.end(), blackA);
//             if (it == remain.end()) {
//                 ok = false;
//                 break;
//             } else {
//                 remain.erase(it);
//             }
//         }
//         if (ok) {
//             remain_list.push_back(remain);
//         }
//     }

//     bool all_ok = false;
//     // remain_listの各要素について、Bの検証を行う
//     //
//     Bの黒をremain_listの要素remainの各blackに移動し、Bの黒がblacksXの黒と一致するかつremainの黒に全て一致する場合はOK
//     for (auto remain : remain_list) {
//         for (int i = 0; i < (int)remain.size(); i++) {
//             auto initPos = remain.at(i);
//             for (int j = 0; j < (int)blacksB.size(); j++) {
//                 int diffY = initPos.first - blacksB.at(j).first;
//                 int diffX = initPos.second - blacksB.at(j).second;
//                 auto tempRemain = remain;
//                 bool ok = true;
//                 for (int k = 0; k < (int)blacksB.size(); k++) {
//                     pair<int, int> blackB = {blacksB.at(k).first + diffY,
//                                              blacksB.at(k).second + diffX};
//                     // blackBがblacksXに存在するか
//                     auto it = find(blacksX.begin(), blacksX.end(), blackB);
//                     if (it == remain.end()) {
//                         ok = false;
//                         break;
//                     }
//                     // blackBがtempRemainに存在するか
//                     auto it2 =
//                         find(tempRemain.begin(), tempRemain.end(), blackB);
//                     // 存在する場合はtempRemainから削除
//                     if (it2 != tempRemain.end()) {
//                         tempRemain.erase(it2);
//                     }
//                 }
//                 if (tempRemain.size() == 0 && ok) {
//                     all_ok = true;
//                     goto end;
//                 }
//             }
//         }
//     end:
//         if (all_ok) {
//             break;
//         }
//     }
//     cout << (all_ok ? "Yes" : "No") << endl;
// }
