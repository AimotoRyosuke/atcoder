// 解説で復習する
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> items(n);
    for (int i = 0; i < n; i++) {
        int p, c;
        cin >> p >> c;
        items.at(i).push_back(p);
        items.at(i).push_back(c);
        for (int j = 0; j < c; j++) {
            int f;
            cin >> f;
            items.at(i).push_back(f);
        }
    }
    sort(items.rbegin(), items.rend(),
         [](const vector<int> &alpha, const vector<int> &beta) {
             return alpha[0] < beta[0];
         });

    for (int i = 0; i < items.size() - 1; i++) {
        for (int j = i + 1; j < items.size(); j++) {
            if ((items.at(i).at(0) < items.at(j).at(0) ||
                 items.at(i).size() > items.at(j).size())) {
                break;
            }
            int count = 0;
            for (int k = 0; k < items.at(i).at(1); k++) {
                for (int l = 0; l < items.at(j).at(1); l++) {
                    if (items.at(i).at(k + 2) == items.at(j).at(l + 2)) {
                        count++;
                        break;
                    }
                }
            }
            if (count == items.at(i).at(1) &&
                ((items.at(i).at(0) == items.at(j).at(0) &&
                  items.at(i).at(1) < items.at(j).at(1)) ||
                 items.at(i).at(0) > items.at(j).at(0))) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}

// 解説
// #include <algorithm>
// #include <iostream>
// #include <utility>
// #include <vector>
// using namespace std;
// // product_j が product_i の上位互換か判定する
// bool is_strictly_superior(const pair<int, vector<int>> &product_i,
//                           const pair<int, vector<int>> &product_j) {
//     const auto &[price_i, feature_i]{product_i};
//     const auto &[price_j, feature_j]{product_j};
//     return price_i >= price_j &&
//            includes(feature_j.begin(), feature_j.end(), feature_i.begin(),
//                     feature_i.end()) &&
//            (price_i > price_j || !includes(feature_i.begin(),
//            feature_i.end(),
//                                            feature_j.begin(),
//                                            feature_j.end()));
// }
// // products に上位互換の組があるか判定する
// bool has_superior_pair(const vector<pair<int, vector<int>>> &products) {
//     return any_of(
//         products.begin(), products.end(), [&products](const auto &product_i)
//         {
//             return any_of(products.begin(), products.end(),
//                           [&product_i](const auto &product_j) {
//                               return is_strictly_superior(product_i,
//                               product_j);
//                           });
//         });
// }
// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<pair<int, vector<int>>> products(N);
//     for (auto &&[price, feature] : products) {
//         cin >> price;
//         int K;
//         cin >> K;
//         feature = vector<int>(K);
//         for (auto &&f : feature)
//             cin >> f;
//     }
//     cout << (has_superior_pair(products) ? "Yes" : "No") << endl;
//     return 0;
// }
