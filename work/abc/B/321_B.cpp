// 復習する
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());

    int score = 0;
    int number = 100;
    // numberが最小の可能性
    for (int i = 0; i < n - 2; i++)
        score += a.at(i);
    if (score >= x) {
        cout << 0 << endl;
        return 0;
    }

    score = 0;
    // 最大・最小はaにある可能性
    for (int i = 1; i < n - 2; i++)
        score += a.at(i);
    if (score >= x) {
        cout << 0 << endl;
        return 0;
    } else if (x - score <= a.at(a.size() - 1)) {
        cout << x - score << endl;
        return 0;
    }

    // numberが最大の可能性
    score = 0;
    for (int i = 1; i < n - 1; i++) {
        score += a.at(i);
    }
    if (score > x) {
        cout << number << endl;
        return 0;
    }
    cout << -1 << endl;
}
