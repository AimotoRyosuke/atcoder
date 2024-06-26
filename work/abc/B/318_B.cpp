#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, set<int>> s;
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int x = a + 1; x <= b; x++) {
            for (int y = c + 1; y <= d; y++) {
                s[x].insert(y);
            }
        }
    }
    int count = 0;
    for (const auto &[key, value] : s) {
        count += s.at(key).size();
    }
    cout << count << endl;
}

// ver.1
// int main() {
//     int n;
//     cin >> n;
//     set<vector<int>> s;
//     for (int i = 0; i < n; i++) {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         for (int x = a + 1; x <= b; x++) {
//             for (int y = c + 1; y <= d; y++) {
//                 s.insert({x, y});
//             }
//         }
//     }
//     cout << s.size() << endl;
// }
