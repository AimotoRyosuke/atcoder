

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> values;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        values.insert(value);
    }

    cout << values.size() << endl;
}

// ver.1
// int main() {
//     int n;
//     cin >> n;
//     vector<int> d(n);

//     for (int i = 0; i < n; i++) {
//         cin >> d.at(i);
//     }

//     sort(d.rbegin(), d.rend());

//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (i == 0) {
//             count++;
//         } else if (d.at(i - 1) != d.at(i)) {
//             count++;
//         }
//     }

//     cout << count << endl;
// }
